// N64 F3DEX2 + RDP renderer on OpenGL ES 2. See n64_renderer.hpp.
#include "n64_renderer.hpp"
#include "gles_includes.h"

#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
#include <unordered_map>
#include <vector>
#include <deque>

#define XXH_INLINE_ALL
#include "xxhash.h"

namespace n64gfx {

// ---------------------------------------------------------------------------------------
// Constants
// ---------------------------------------------------------------------------------------
namespace G {
    // F3DEX2 geometry mode
    constexpr uint32_t ZBUFFER = 0x1, SHADE = 0x4, CULL_FRONT = 0x200, CULL_BACK = 0x400,
        FOG = 0x10000, LIGHTING = 0x20000, TEXTURE_GEN = 0x40000, TEXTURE_GEN_LINEAR = 0x80000,
        SHADING_SMOOTH = 0x200000;
    // Other mode H
    constexpr int CYCLE_SHIFT = 20, TEXFILT_SHIFT = 12, TEXTLUT_SHIFT = 14;
    enum Cycle { CYC_1 = 0, CYC_2 = 1, CYC_COPY = 2, CYC_FILL = 3 };
    // Other mode L
    constexpr uint32_t AC_THRESHOLD = 1, AC_DITHER = 3, ZS_PRIM = 4, Z_CMP = 0x10, Z_UPD = 0x20,
        CVG_X_ALPHA = 0x1000, ALPHA_CVG_SEL = 0x2000, FORCE_BL = 0x4000;
    constexpr int ZMODE_SHIFT = 10;
    enum ZMode { ZMODE_OPA = 0, ZMODE_INTER = 1, ZMODE_XLU = 2, ZMODE_DEC = 3 };
    // Image formats/sizes
    enum Fmt { RGBA = 0, YUV = 1, CI = 2, IA = 3, I = 4 };
    enum Siz { B4 = 0, B8 = 1, B16 = 2, B32 = 3 };
}

static inline float clampf(float v, float lo, float hi) { return v < lo ? lo : (v > hi ? hi : v); }

// ---------------------------------------------------------------------------------------
// GL helpers
// ---------------------------------------------------------------------------------------
static GLuint compile_shader(GLenum type, const std::string& src) {
    GLuint s = glCreateShader(type);
    const char* p = src.c_str();
    glShaderSource(s, 1, &p, nullptr);
    glCompileShader(s);
    GLint ok = 0;
    glGetShaderiv(s, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        char log[2048] = {};
        glGetShaderInfoLog(s, sizeof(log), nullptr, log);
        fprintf(stderr, "[gfx] shader compile failed: %s\n%s\n", log, src.c_str());
    }
    return s;
}

static GLuint link_program(const std::string& vs, const std::string& fs) {
    GLuint p = glCreateProgram();
    GLuint v = compile_shader(GL_VERTEX_SHADER, vs), f = compile_shader(GL_FRAGMENT_SHADER, fs);
    glAttachShader(p, v);
    glAttachShader(p, f);
    glBindAttribLocation(p, 0, "aPos");
    glBindAttribLocation(p, 1, "aColor");
    glBindAttribLocation(p, 2, "aUV0");
    glBindAttribLocation(p, 3, "aUV1");
    glLinkProgram(p);
    GLint ok = 0;
    glGetProgramiv(p, GL_LINK_STATUS, &ok);
    if (!ok) {
        char log[2048] = {};
        glGetProgramInfoLog(p, sizeof(log), nullptr, log);
        fprintf(stderr, "[gfx] program link failed: %s\n", log);
    }
    return p;
}

static const char* kVertexShader =
    "attribute vec4 aPos;\n"
    "attribute vec4 aColor;\n"
    "attribute vec2 aUV0;\n"
    "attribute vec2 aUV1;\n"
    "varying vec4 vColor;\n"
    "varying vec2 vUV0;\n"
    "varying vec2 vUV1;\n"
    "void main() {\n"
    "  gl_Position = aPos;\n"
    "  vColor = aColor;\n"
    "  vUV0 = aUV0;\n"
    "  vUV1 = aUV1;\n"
    "}\n";

// ---------------------------------------------------------------------------------------
// Implementation state
// ---------------------------------------------------------------------------------------
struct Vertex {          // after transform
    float x, y, z, w;    // GL clip space (viewport already applied)
    float r, g, b, a;
    float s, t;          // texture coords in texels * 32 (S10.5 units), after G_TEXTURE scale
};

struct GLVertex { float x, y, z, w, r, g, b, a, u0, v0, u1, v1; };

struct Tile {
    int fmt = 0, siz = 0, line = 0, tmem = 0, palette = 0;
    int cms = 0, cmt = 0, masks = 0, maskt = 0, shifts = 0, shiftt = 0;
    int uls = 0, ult = 0, lrs = 0, lrt = 0; // 10.2
};

struct TmemLoad {        // what was last loaded at a TMEM address
    bool valid = false, block = false;
    uint32_t addr = 0;   // RDRAM address of the first loaded texel
    int width = 0;       // source image width in texels (tile loads)
    int siz = 0;         // source image texel size
    int uls = 0, ult = 0;// texel origin of a tile load
};

struct CachedTexture { GLuint id = 0; int w = 0, h = 0; uint64_t last_used = 0; };

struct Framebuffer {
    uint32_t addr = 0; int width = 0, height = 0, siz = 0;
    GLuint fbo = 0, tex = 0, depth = 0;
    uint64_t last_drawn = 0;
    bool presented = false;   // the VI has shown it: a real screen buffer, kept on the GPU only
    bool direct_shown = false; // drawn straight to the screen at least once
    bool dirty = false;       // drawn into since it was bound
    int max_row = 0;          // rows touched while bound (from the scissor), for write-back
};

struct ShaderProgram {
    GLuint prog = 0;
    GLint uPrim = -1, uEnv = -1, uMisc = -1, uTex0 = -1, uTex1 = -1;
    float prim[4] = { -1, -1, -1, -1 }, env[4] = { -1, -1, -1, -1 }, misc[4] = { -1, -1, -1, -1 }; // last values set
};

// What's currently set in GL, so unchanged state isn't sent again (each call costs on vitaGL).
struct GLCache {
    GLuint prog = ~0u, tex[2] = { ~0u, ~0u };
    int active_unit = -1, blend = -1, depth_test = -1, depth_func = -1, depth_mask = -1, poly_offset = -1;
    int cull = -1, cull_face = -1, scissor_on = -1, sc[4] = { -1, -1, -1, -1 };
    bool attribs_on = false;
};

struct Renderer::Impl {
    uint8_t* rdram;
    Config cfg;
    Stats stats{}, last{};
    uint64_t frame = 0;

    // RSP state
    uint32_t segments[16] = {};
    float mv_stack[10][4][4];
    int mv_depth = 0;
    float proj[4][4];
    float mvp[4][4];
    bool mvp_dirty = true;
    float vp_scale[4] = { 160, 120, 511, 0 }, vp_trans[4] = { 160, 120, 511, 0 };
    uint32_t geometry_mode = 0;
    int num_lights = 1;
    float light_col[8][3] = {}, light_dir[8][3] = {};
    Vertex verts[64];
    uint32_t rdphalf1 = 0, rdphalf2 = 0;
    // G_TEXTURE
    bool tex_on = false; int tex_tile = 0; float tex_scale_s = 1, tex_scale_t = 1;

    // RDP state
    uint32_t othermode_h = 0, othermode_l = 0;
    uint32_t combine_w0 = 0, combine_w1 = 0;
    float prim[4] = { 1, 1, 1, 1 }, env[4] = { 1, 1, 1, 1 }, blend_col[4] = {}, fog_col[4] = {};
    float prim_lod = 0, prim_depth = 0;
    uint32_t fill_color = 0;
    int scissor[4] = { 0, 0, 320, 240 }; // ulx, uly, lrx, lry in pixels
    uint32_t cimg_addr = 0, zimg_addr = 0; int cimg_width = 320, cimg_siz = 2;
    uint32_t timg_addr = 0; int timg_fmt = 0, timg_siz = 0, timg_width = 0;
    Tile tiles[8];
    TmemLoad loads[512];
    uint16_t tlut[256] = {};

    // GL objects
    std::unordered_map<uint64_t, ShaderProgram> programs;
    std::unordered_map<uint64_t, CachedTexture> textures;
    std::deque<Framebuffer> framebuffers; // deque: pointers stay valid as it grows
    Framebuffer* current_fb = nullptr;
    bool pending_depth_clear = false;
    GLuint white_tex = 0;
    GLCache gl;
    std::unordered_map<GLuint, int> tex_filter; // 0 nearest, 1 linear
    // Where the current colour image is drawn: an FBO at scale, or the screen (letterboxed).
    bool target_display = false, display_drawn = false;
    int tgt_x0 = 0, tgt_y0 = 0; float tgt_sx = 1, tgt_sy = 1;
    ShaderProgram present_prog;
    std::vector<GLVertex> batch;
    std::vector<uint32_t> decode_buf;

    // The draw state the current batch was recorded with.
    struct DrawKey {
        const ShaderProgram* shader = nullptr; GLuint tex0 = 0, tex1 = 0; bool linear0 = false, linear1 = false;
        uint32_t blend = 0, depth = 0, cull = 0; int sc[4] = {};
        float prim[4] = {}, env[4] = {}, misc[4] = {};
        bool operator==(const DrawKey& o) const {
            return shader == o.shader && tex0 == o.tex0 && tex1 == o.tex1 && linear0 == o.linear0 && linear1 == o.linear1 &&
                blend == o.blend && depth == o.depth && cull == o.cull && !memcmp(sc, o.sc, sizeof(sc)) &&
                !memcmp(prim, o.prim, sizeof(prim)) && !memcmp(env, o.env, sizeof(env)) && !memcmp(misc, o.misc, sizeof(misc));
        }
    } batch_key;

    Impl(uint8_t* r, const Config& c) : rdram(r), cfg(c) {
        identity(proj);
        identity(mv_stack[0]);
        identity(mvp);
        uint32_t white = 0xFFFFFFFF;
        glGenTextures(1, &white_tex);
        glBindTexture(GL_TEXTURE_2D, white_tex);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 1, 1, 0, GL_RGBA, GL_UNSIGNED_BYTE, &white);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        present_prog.prog = link_program(kVertexShader,
            "precision mediump float;\n"
            "uniform sampler2D uTex0;\n"
            "varying vec4 vColor;\nvarying vec2 vUV0;\nvarying vec2 vUV1;\n"
            "void main() { gl_FragColor = vec4(texture2D(uTex0, vUV0).rgb, 1.0); }\n");
        present_prog.uTex0 = glGetUniformLocation(present_prog.prog, "uTex0");
        batch.reserve(4096);
    }

    // ---- memory ----
    uint32_t phys(uint32_t addr) const {
        uint32_t seg = (addr >> 24) & 0xF;
        return (segments[seg] + (addr & 0xFFFFFF)) & 0x7FFFFF;
    }
    uint32_t r32(uint32_t a) const { return *reinterpret_cast<const uint32_t*>(rdram + (a & 0x7FFFFC)); }
    uint16_t r16(uint32_t a) const { return *reinterpret_cast<const uint16_t*>(rdram + ((a ^ 2) & 0x7FFFFE)); }
    uint8_t r8(uint32_t a) const { return rdram[(a ^ 3) & 0x7FFFFF]; }

    // ---- matrices (row-vector convention: v' = v * M) ----
    static void identity(float m[4][4]) {
        for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) m[i][j] = (i == j) ? 1.0f : 0.0f;
    }
    static void mul(float out[4][4], const float a[4][4], const float b[4][4]) {
        float r[4][4];
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                r[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j] + a[i][3] * b[3][j];
        memcpy(out, r, sizeof(r));
    }
    void load_matrix(uint32_t addr, float m[4][4]) {
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++) {
                int k = i * 4 + j;
                int16_t hi = (int16_t)r16(addr + k * 2);
                uint16_t lo = r16(addr + 32 + k * 2);
                m[i][j] = hi + lo / 65536.0f;
            }
    }

    // ---- framebuffers ----
    Framebuffer* get_framebuffer(uint32_t addr, int width) {
        int height = width * 3 / 4;
        for (auto& f : framebuffers) if (f.addr == addr && f.width == width) return &f;
        Framebuffer f;
        f.addr = addr; f.width = width; f.height = height;
        glGenTextures(1, &f.tex);
        glBindTexture(GL_TEXTURE_2D, f.tex);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width * cfg.scale, height * cfg.scale, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glGenRenderbuffers(1, &f.depth);
        glBindRenderbuffer(GL_RENDERBUFFER, f.depth);
        glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH_COMPONENT16, width * cfg.scale, height * cfg.scale);
        glGenFramebuffers(1, &f.fbo);
        glBindFramebuffer(GL_FRAMEBUFFER, f.fbo);
        glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, f.tex, 0);
        glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, f.depth);
        if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE)
            fprintf(stderr, "[gfx] framebuffer for 0x%06X incomplete\n", addr);
        glViewport(0, 0, width * cfg.scale, height * cfg.scale);
        glDisable(GL_SCISSOR_TEST);
        glClearColor(0, 0, 0, 1);
        glClearDepthf(1.0f);
        glDepthMask(GL_TRUE);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        framebuffers.push_back(f);
        forget_gl_state();
        printf("[gfx] frame %llu: new colour image 0x%06X, %dx%d (z 0x%06X)\n", (unsigned long long)frame, addr, width, height, zimg_addr);
        return &framebuffers.back();
    }

    // Off-screen colour images (never shown by the VI) are often used as textures afterwards,
    // e.g. the game draws the HUD frame into its background image once at load. Those are
    // copied between RDRAM and the GPU: uploaded when bound, written back when left.
    void upload_from_rdram(Framebuffer& f) {
        int w = f.width, h = f.height;
        decode_buf.resize((size_t)w * h);
        for (int y = 0; y < h; y++)
            for (int x = 0; x < w; x++) {
                uint32_t a = f.addr + (uint32_t)(y * w + x) * 2;
                decode_buf[(size_t)y * w + x] = a < 0x800000 ? (rgba5551(r16(a)) | 0xFF000000u) : 0xFF000000u;
            }
        GLuint tmp;
        glGenTextures(1, &tmp);
        glBindTexture(GL_TEXTURE_2D, tmp);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, decode_buf.data());
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glBindFramebuffer(GL_FRAMEBUFFER, f.fbo);
        glViewport(0, 0, w * cfg.scale, h * cfg.scale);
        glDisable(GL_SCISSOR_TEST); glDisable(GL_DEPTH_TEST); glDisable(GL_BLEND); glDisable(GL_CULL_FACE);
        glDisable(GL_POLYGON_OFFSET_FILL);
        glUseProgram(present_prog.prog);
        glUniform1i(present_prog.uTex0, 0);
        glActiveTexture(GL_TEXTURE0);
        // Rows run top-down in RDRAM; the FBO's v = 0 is the top as drawn by rect_vertices (y flipped), so flip here.
        static const GLVertex quad[6] = {
            { -1,  1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 1,  1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { -1, -1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0 },
            {  1,  1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 1, -1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { -1, -1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0 },
        };
        draw_quad(quad);
        glDeleteTextures(1, &tmp);
        forget_gl_state();
    }

    void draw_quad(const GLVertex* quad) {
        glEnableVertexAttribArray(0); glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, sizeof(GLVertex), &quad[0].x);
        glEnableVertexAttribArray(1); glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, sizeof(GLVertex), &quad[0].r);
        glEnableVertexAttribArray(2); glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, sizeof(GLVertex), &quad[0].u0);
        glEnableVertexAttribArray(3); glVertexAttribPointer(3, 2, GL_FLOAT, GL_FALSE, sizeof(GLVertex), &quad[0].u1);
        glDrawArrays(GL_TRIANGLES, 0, 6);
    }

    void write_back(Framebuffer& f) {
        if (!f.dirty || f.presented) { f.dirty = false; return; }
        f.dirty = false;
        int s = cfg.scale, w = f.width, rows = std::min(f.max_row, f.height);
        if (rows <= 0) return;
        std::vector<uint8_t> px((size_t)w * s * rows * s * 4);
        glBindFramebuffer(GL_FRAMEBUFFER, f.fbo);
        // GL row 0 is the bottom; the top N64 rows are the last GL rows.
        glReadPixels(0, (f.height - rows) * s, w * s, rows * s, GL_RGBA, GL_UNSIGNED_BYTE, px.data());
        for (int y = 0; y < rows; y++) {
            int gy = (rows - 1 - y) * s;
            for (int x = 0; x < w; x++) {
                const uint8_t* p = &px[((size_t)gy * w * s + (size_t)x * s) * 4];
                uint16_t c = (uint16_t)(((p[0] >> 3) << 11) | ((p[1] >> 3) << 6) | ((p[2] >> 3) << 1) | 1);
                uint32_t a = f.addr + (uint32_t)(y * w + x) * 2;
                if (a < 0x800000) *reinterpret_cast<uint16_t*>(rdram + (a ^ 2)) = c;
            }
        }
        stats.writebacks++;
    }

    void leave_framebuffer() {
        flush();
        current_fb = nullptr;
    }

    // Before a texture is read from RDRAM: if it lies in an off-screen colour image drawn on
    // the GPU and not yet copied back, copy it back now. Read-backs are slow, so they only
    // happen when the game actually uses such an image as a texture.
    void sync_rdram_for(uint32_t addr) {
        for (auto& f : framebuffers) {
            if (!f.dirty || f.presented || &f == current_fb) continue;
            if (addr >= f.addr && addr < f.addr + (uint32_t)(f.width * f.height * 2)) {
                write_back(f);
                rebind_target();
            }
        }
    }

    // Re-selects the current target after something else was bound.
    void rebind_target() {
        if (!current_fb) return;
        if (target_display) {
            glBindFramebuffer(GL_FRAMEBUFFER, 0);
            glViewport(tgt_x0, tgt_y0, (int)std::lround(current_fb->width * tgt_sx), (int)std::lround(current_fb->height * tgt_sy));
        } else {
            glBindFramebuffer(GL_FRAMEBUFFER, current_fb->fbo);
            glViewport(0, 0, current_fb->width * cfg.scale, current_fb->height * cfg.scale);
        }
    }

    void bind_color_image() {
        leave_framebuffer();
        if (cimg_addr == zimg_addr) return; // depth image: handled by fills
        Framebuffer* f = get_framebuffer(cimg_addr, cimg_width);
        current_fb = f;
        if (cfg.direct_to_screen && f->presented) {
            // A screen buffer: draw straight to the display, letterboxed 4:3. No FBO, no extra copy.
            target_display = true;
            int h = cfg.output_height, w = h * 4 / 3;
            if (w > cfg.output_width) { w = cfg.output_width; h = w * 3 / 4; }
            tgt_x0 = (cfg.output_width - w) / 2; tgt_y0 = (cfg.output_height - h) / 2;
            tgt_sx = (float)w / f->width; tgt_sy = (float)h / f->height;
            glBindFramebuffer(GL_FRAMEBUFFER, 0);
            glViewport(tgt_x0, tgt_y0, w, h);
            if (!display_drawn) {
                display_drawn = true;
                glDisable(GL_SCISSOR_TEST);
                glDepthMask(GL_TRUE);
                glClearColor(0, 0, 0, 1);
                glClearDepthf(1.0f);
                glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
                forget_gl_state();
            }
        } else {
            target_display = false;
            // Bring in what the CPU wrote, unless the GPU copy is newer (drawn, not yet read back).
            if (!f->presented && !f->dirty) { upload_from_rdram(*f); f->max_row = 0; }
            tgt_x0 = tgt_y0 = 0; tgt_sx = tgt_sy = (float)cfg.scale;
            glBindFramebuffer(GL_FRAMEBUFFER, f->fbo);
            glViewport(0, 0, f->width * cfg.scale, f->height * cfg.scale);
        }
        if (pending_depth_clear) {
            glDisable(GL_SCISSOR_TEST);
            glDepthMask(GL_TRUE);
            glClearDepthf(1.0f);
            glClear(GL_DEPTH_BUFFER_BIT);
            pending_depth_clear = false;
            forget_gl_state();
        }
    }

    float fb_w() const { return current_fb ? (float)current_fb->width : 320.0f; }
    float fb_h() const { return current_fb ? (float)current_fb->height : 240.0f; }

    // ---- textures ----
    static int bits_of(int siz) { return 4 << siz; }

    // Address and bit offset of texel (x, y) of tile t, using what was loaded at its TMEM address.
    bool texel_source(const Tile& t, const TmemLoad& L, int x, int y, uint32_t& addr, int& bit) const {
        int bits = bits_of(t.siz);
        if (L.block) {
            int row_bytes = t.line * 8 * (t.siz == G::B32 ? 2 : 1);
            uint32_t bitpos = (uint32_t)x * bits;
            addr = L.addr + (uint32_t)y * row_bytes + (bitpos >> 3);
            bit = bitpos & 7;
        } else {
            int lbytes_bits = bits_of(L.siz);
            uint32_t row_start = L.addr + (uint32_t)(((L.ult + y) * L.width + L.uls) * lbytes_bits / 8);
            uint32_t bitpos = (uint32_t)x * bits;
            addr = row_start + (bitpos >> 3);
            bit = bitpos & 7;
        }
        return true;
    }

    static uint32_t rgba5551(uint16_t c) {
        uint32_t r = (c >> 11) & 31, g = (c >> 6) & 31, b = (c >> 1) & 31, a = (c & 1) ? 255 : 0;
        r = (r << 3) | (r >> 2); g = (g << 3) | (g >> 2); b = (b << 3) | (b >> 2);
        return r | (g << 8) | (b << 16) | (a << 24); // memory order R, G, B, A
    }
    static uint32_t ia16(uint16_t c) {
        uint32_t i = c >> 8, a = c & 0xFF;
        return i | (i << 8) | (i << 16) | (a << 24);
    }

    uint32_t palette_color(int index) const {
        uint16_t c = tlut[index & 0xFF];
        uint32_t tlut_type = (othermode_h >> G::TEXTLUT_SHIFT) & 3;
        return tlut_type == 3 ? ia16(c) : rgba5551(c);
    }

    uint32_t decode_texel(const Tile& t, uint32_t addr, int bit) const {
        switch (t.siz) {
            case G::B4: {
                uint8_t byte = r8(addr);
                uint8_t v = bit ? (byte & 0xF) : (byte >> 4);
                switch (t.fmt) {
                    case G::CI: return palette_color((t.palette << 4) | v);
                    case G::IA: { uint32_t i = (v >> 1) * 255 / 7, a = (v & 1) ? 255 : 0; return i | (i << 8) | (i << 16) | (a << 24); }
                    default: { uint32_t i = v * 17; return i | (i << 8) | (i << 16) | (i << 24); } // I4
                }
            }
            case G::B8: {
                uint8_t v = r8(addr);
                switch (t.fmt) {
                    case G::CI: return palette_color(v);
                    case G::IA: { uint32_t i = (v >> 4) * 17, a = (v & 0xF) * 17; return i | (i << 8) | (i << 16) | (a << 24); }
                    default: return v | (v << 8) | (v << 16) | ((uint32_t)v << 24); // I8
                }
            }
            case G::B16: {
                uint16_t v = r16(addr);
                if (t.fmt == G::IA) return ia16(v);
                if (t.fmt == G::CI) return palette_color(v >> 8);
                return rgba5551(v);
            }
            default: { // 32-bit RGBA
                uint32_t v = r32(addr); // stored as one host word: 0xRRGGBBAA
                uint32_t r = v >> 24, g = (v >> 16) & 0xFF, b = (v >> 8) & 0xFF, a = v & 0xFF;
                return r | (g << 8) | (b << 16) | (a << 24);
            }
        }
    }

    void tile_size(const Tile& t, int& w, int& h) const {
        int tw = ((t.lrs - t.uls) >> 2) + 1, th = ((t.lrt - t.ult) >> 2) + 1;
        if (tw <= 0 || t.lrs < t.uls) tw = t.line ? t.line * 64 / bits_of(t.siz) : 32;
        if (th <= 0 || t.lrt < t.ult) th = 32;
        w = t.masks ? (1 << t.masks) : tw;
        h = t.maskt ? (1 << t.maskt) : th;
        // Clamped tiles larger than their mask show the whole tile.
        if (t.masks && (t.cms & 2) && tw > w) w = tw;
        if (t.maskt && (t.cmt & 2) && th > h) h = th;
        w = std::clamp(w, 1, 1024); h = std::clamp(h, 1, 1024);
    }

    // Returns the GL texture for tile index ti, creating/uploading it if needed.
    GLuint texture_for_tile(int ti, int& w_out, int& h_out) {
        const Tile& t = tiles[ti & 7];
        const TmemLoad& L = loads[t.tmem & 511];
        int w, h;
        tile_size(t, w, h);
        w_out = w; h_out = h;
        if (!L.valid) return white_tex;
        sync_rdram_for(L.addr);
        if (getenv("TNT_GLES_FBTEX")) {
            for (auto& f : framebuffers)
                if (L.addr >= f.addr && L.addr < f.addr + (uint32_t)(f.width * f.height * 2))
                    printf("[gfx] frame %llu: texture from colour image 0x%06X (+0x%X) fmt %d siz %d %dx%d\n", (unsigned long long)frame, f.addr, L.addr - f.addr, t.fmt, t.siz, w, h);
        }

        // Hash the source rows (raw RDRAM) plus the parameters that change decoding.
        XXH3_state_t st;
        XXH3_64bits_reset(&st);
        uint32_t params[8] = { (uint32_t)t.fmt, (uint32_t)t.siz, (uint32_t)t.line, (uint32_t)w, (uint32_t)h, (uint32_t)t.palette,
                               L.addr, (othermode_h >> G::TEXTLUT_SHIFT) & 3 };
        XXH3_64bits_update(&st, params, sizeof(params));
        int bits = bits_of(t.siz);
        for (int y = 0; y < h; y++) {
            uint32_t a; int b;
            texel_source(t, L, 0, y, a, b);
            uint32_t bytes = ((uint32_t)w * bits + 7) / 8 + 4;
            uint32_t start = a & ~3u, end = (a + bytes + 3) & ~3u;
            if (end > 0x800000 || start >= end) break;
            XXH3_64bits_update(&st, rdram + start, end - start);
        }
        if (t.fmt == G::CI) XXH3_64bits_update(&st, tlut, sizeof(tlut));
        uint64_t key = XXH3_64bits_digest(&st);

        auto it = textures.find(key);
        if (it != textures.end()) { it->second.last_used = frame; return it->second.id; }

        decode_buf.resize((size_t)w * h);
        for (int y = 0; y < h; y++)
            for (int x = 0; x < w; x++) {
                uint32_t a; int b;
                texel_source(t, L, x, y, a, b);
                decode_buf[(size_t)y * w + x] = (a < 0x800000) ? decode_texel(t, a, b) : 0;
            }
        CachedTexture ct;
        glGenTextures(1, &ct.id);
        glBindTexture(GL_TEXTURE_2D, ct.id);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, decode_buf.data());
        bool pow2 = !(w & (w - 1)) && !(h & (h - 1));
        auto wrap = [&](int cm, int mask) -> GLint {
            if (!pow2 || (cm & 2) || !mask) return GL_CLAMP_TO_EDGE;
            return (cm & 1) ? GL_MIRRORED_REPEAT : GL_REPEAT;
        };
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, wrap(t.cms, t.masks));
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, wrap(t.cmt, t.maskt));
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        ct.w = w; ct.h = h; ct.last_used = frame;
        textures[key] = ct;
        tex_filter[ct.id] = 0;
        gl.tex[0] = gl.tex[1] = ~0u; // glBindTexture above changed the active unit's binding
        stats.texture_uploads++;
        return ct.id;
    }

    void evict_textures() {
        if (textures.size() < 300) return;
        for (auto it = textures.begin(); it != textures.end();) {
            if (frame - it->second.last_used > 30) {
                tex_filter.erase(it->second.id);
                for (auto& t : gl.tex) if (t == it->second.id) t = ~0u;
                glDeleteTextures(1, &it->second.id);
                it = textures.erase(it);
            }
            else ++it;
        }
    }

    // ---- combiner → shader ----
    uint32_t cycle_type() const { return (othermode_h >> G::CYCLE_SHIFT) & 3; }

    static std::string color_input(int which, int v, bool second_cycle) {
        // which: 0 = A, 1 = B, 2 = C, 3 = D
        const char* comb = second_cycle ? "comb.rgb" : "vec3(0.0)";
        if (which == 0) { // A: 4 bits
            switch (v) { case 0: return comb; case 1: return "t0.rgb"; case 2: return "t1.rgb"; case 3: return "uPrim.rgb";
                case 4: return "vColor.rgb"; case 5: return "uEnv.rgb"; case 6: return "vec3(1.0)"; case 7: return "vec3(0.5)"; default: return "vec3(0.0)"; }
        }
        if (which == 1) { // B: 4 bits
            switch (v) { case 0: return comb; case 1: return "t0.rgb"; case 2: return "t1.rgb"; case 3: return "uPrim.rgb";
                case 4: return "vColor.rgb"; case 5: return "uEnv.rgb"; default: return "vec3(0.0)"; }
        }
        if (which == 2) { // C: 5 bits
            switch (v) { case 0: return comb; case 1: return "t0.rgb"; case 2: return "t1.rgb"; case 3: return "uPrim.rgb";
                case 4: return "vColor.rgb"; case 5: return "uEnv.rgb"; case 6: return "vec3(1.0)";
                case 7: return second_cycle ? "vec3(comb.a)" : "vec3(0.0)"; case 8: return "vec3(t0.a)"; case 9: return "vec3(t1.a)";
                case 10: return "vec3(uPrim.a)"; case 11: return "vec3(vColor.a)"; case 12: return "vec3(uEnv.a)";
                case 13: return "vec3(uMisc.y)"; case 14: return "vec3(uMisc.x)"; default: return "vec3(0.0)"; }
        }
        switch (v) { case 0: return comb; case 1: return "t0.rgb"; case 2: return "t1.rgb"; case 3: return "uPrim.rgb";
            case 4: return "vColor.rgb"; case 5: return "uEnv.rgb"; case 6: return "vec3(1.0)"; default: return "vec3(0.0)"; }
    }
    static std::string alpha_input(int which, int v, bool second_cycle) {
        const char* comb = second_cycle ? "comb.a" : "0.0";
        if (which == 2) { // C
            switch (v) { case 0: return "uMisc.y"; case 1: return "t0.a"; case 2: return "t1.a"; case 3: return "uPrim.a";
                case 4: return "vColor.a"; case 5: return "uEnv.a"; case 6: return "uMisc.x"; default: return "0.0"; }
        }
        switch (v) { case 0: return comb; case 1: return "t0.a"; case 2: return "t1.a"; case 3: return "uPrim.a";
            case 4: return "vColor.a"; case 5: return "uEnv.a"; case 6: return "1.0"; default: return "0.0"; }
    }

    struct Mux { int a[2], b[2], c[2], d[2], Aa[2], Ab[2], Ac[2], Ad[2]; };
    Mux decode_mux() const {
        uint32_t w0 = combine_w0, w1 = combine_w1;
        Mux m;
        m.a[0] = (w0 >> 20) & 0xF; m.c[0] = (w0 >> 15) & 0x1F; m.Aa[0] = (w0 >> 12) & 7; m.Ac[0] = (w0 >> 9) & 7;
        m.a[1] = (w0 >> 5) & 0xF;  m.c[1] = w0 & 0x1F;
        m.b[0] = (w1 >> 28) & 0xF; m.b[1] = (w1 >> 24) & 0xF; m.Aa[1] = (w1 >> 21) & 7; m.Ac[1] = (w1 >> 18) & 7;
        m.d[0] = (w1 >> 15) & 7;   m.Ab[0] = (w1 >> 12) & 7; m.Ad[0] = (w1 >> 9) & 7;
        m.d[1] = (w1 >> 6) & 7;    m.Ab[1] = (w1 >> 3) & 7;  m.Ad[1] = w1 & 7;
        return m;
    }

    // alpha_mode: 0 none, 1 threshold against uMisc.z, 2 cutout (coverage) at 0.5
    ShaderProgram& program_for(uint32_t cyc, int alpha_mode, bool copy_or_fill) {
        uint64_t key = copy_or_fill ? (0xC0000000ull << 32) | (uint64_t)cyc << 8 | alpha_mode
                                    : ((uint64_t)combine_w0 << 32 | combine_w1) ^ ((uint64_t)cyc << 58) ^ ((uint64_t)alpha_mode << 61);
        auto it = programs.find(key);
        if (it != programs.end()) return it->second;

        std::string fs =
            "precision mediump float;\n"
            "uniform sampler2D uTex0;\nuniform sampler2D uTex1;\n"
            "uniform vec4 uPrim;\nuniform vec4 uEnv;\nuniform vec4 uMisc;\n" // x prim lod, y lod frac, z alpha ref
            "varying vec4 vColor;\nvarying vec2 vUV0;\nvarying vec2 vUV1;\n"
            "void main() {\n"
            "  vec4 t0 = texture2D(uTex0, vUV0);\n"
            "  vec4 t1 = texture2D(uTex1, vUV1);\n"
            "  vec4 comb = vec4(0.0);\n";
        if (copy_or_fill) {
            fs += cyc == G::CYC_COPY ? "  comb = t0;\n" : "  comb = vColor;\n";
        } else {
            Mux m = decode_mux();
            int cycles = (cyc == G::CYC_2) ? 2 : 1;
            for (int c = 0; c < cycles; c++) {
                bool second = c == 1;
                fs += "  {\n";
                fs += "    vec3 rgb = (" + color_input(0, m.a[c], second) + " - " + color_input(1, m.b[c], second) + ") * " +
                      color_input(2, m.c[c], second) + " + " + color_input(3, m.d[c], second) + ";\n";
                fs += "    float a = (" + alpha_input(0, m.Aa[c], second) + " - " + alpha_input(1, m.Ab[c], second) + ") * " +
                      alpha_input(2, m.Ac[c], second) + " + " + alpha_input(3, m.Ad[c], second) + ";\n";
                fs += "    comb = clamp(vec4(rgb, a), 0.0, 1.0);\n  }\n";
            }
        }
        static const int dbg = getenv("TNT_GLES_DEBUG") ? atoi(getenv("TNT_GLES_DEBUG")) : 0;
        if ((dbg & 16) && !copy_or_fill) fs += "  comb = vec4(1.0, 0.0, 0.0, 1.0);\n";
        if (alpha_mode == 1) fs += "  if (comb.a < uMisc.z) discard;\n";
        else if (alpha_mode == 2) fs += "  if (comb.a < 0.5) discard;\n";
        fs += "  gl_FragColor = comb;\n}\n";

        ShaderProgram p;
        p.prog = link_program(kVertexShader, fs);
        p.uPrim = glGetUniformLocation(p.prog, "uPrim");
        p.uEnv = glGetUniformLocation(p.prog, "uEnv");
        p.uMisc = glGetUniformLocation(p.prog, "uMisc");
        p.uTex0 = glGetUniformLocation(p.prog, "uTex0");
        p.uTex1 = glGetUniformLocation(p.prog, "uTex1");
        glUseProgram(p.prog);
        glUniform1i(p.uTex0, 0);
        glUniform1i(p.uTex1, 1);
        gl.prog = p.prog;
        stats.shaders++;
        return programs[key] = p;
    }

    bool combiner_uses_texel(int which) const {
        Mux m = decode_mux();
        int cycles = cycle_type() == G::CYC_2 ? 2 : 1;
        for (int c = 0; c < cycles; c++) {
            int t = which == 0 ? 1 : 2;
            if (m.a[c] == t || m.b[c] == t || m.c[c] == t || m.d[c] == t || m.Aa[c] == t || m.Ab[c] == t || m.Ac[c] == t || m.Ad[c] == t) return true;
            if (m.c[c] == (which == 0 ? 8 : 9)) return true;
        }
        return false;
    }

    // ---- batching / drawing ----
    static void set_cap(GLenum cap, int& cached, bool on) {
        if (cached == (int)on) return;
        if (on) glEnable(cap); else glDisable(cap);
        cached = on;
    }
    void bind_tex(int unit, GLuint id, bool linear) {
        GLuint t = id ? id : white_tex;
        if (gl.tex[unit] != t) {
            if (gl.active_unit != unit) { glActiveTexture(unit ? GL_TEXTURE1 : GL_TEXTURE0); gl.active_unit = unit; }
            glBindTexture(GL_TEXTURE_2D, t);
            gl.tex[unit] = t;
        }
        if (!id) return;
        auto it = tex_filter.find(id);
        int want = linear ? 1 : 0;
        if (it != tex_filter.end() && it->second == want) return;
        if (gl.active_unit != unit) { glActiveTexture(unit ? GL_TEXTURE1 : GL_TEXTURE0); gl.active_unit = unit; }
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, linear ? GL_LINEAR : GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, linear ? GL_LINEAR : GL_NEAREST);
        tex_filter[id] = want;
    }
    // After code that sets GL state directly.
    void forget_gl_state() {
        bool attribs = gl.attribs_on;
        gl = GLCache();
        gl.attribs_on = attribs;
    }

    void flush() {
        if (batch.empty()) return;
        if (!current_fb) { batch.clear(); return; }
        const DrawKey& k = batch_key;
        const ShaderProgram* p = k.shader;
        if (!p) { batch.clear(); return; }
        if (gl.prog != p->prog) { glUseProgram(p->prog); gl.prog = p->prog; }
        ShaderProgram* pm = const_cast<ShaderProgram*>(p);
        if (memcmp(pm->prim, k.prim, sizeof(k.prim))) { glUniform4fv(p->uPrim, 1, k.prim); memcpy(pm->prim, k.prim, sizeof(k.prim)); }
        if (memcmp(pm->env, k.env, sizeof(k.env))) { glUniform4fv(p->uEnv, 1, k.env); memcpy(pm->env, k.env, sizeof(k.env)); }
        if (memcmp(pm->misc, k.misc, sizeof(k.misc))) { glUniform4fv(p->uMisc, 1, k.misc); memcpy(pm->misc, k.misc, sizeof(k.misc)); }
        bind_tex(1, k.tex1, k.linear1);
        bind_tex(0, k.tex0, k.linear0);

        static const int debug_flags = getenv("TNT_GLES_DEBUG") ? atoi(getenv("TNT_GLES_DEBUG")) : 0;
        bool ztest = k.depth & 1, zwrite = k.depth & 2, decal = k.depth & 4;
        if (debug_flags & 1) ztest = zwrite = false;
        if (k.blend && gl.blend != 1) glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        set_cap(GL_BLEND, gl.blend, k.blend != 0);
        set_cap(GL_DEPTH_TEST, gl.depth_test, ztest || zwrite);
        if (ztest || zwrite) { int f = ztest ? 1 : 0; if (gl.depth_func != f) { glDepthFunc(ztest ? GL_LEQUAL : GL_ALWAYS); gl.depth_func = f; } }
        if (gl.depth_mask != (int)zwrite) { glDepthMask(zwrite ? GL_TRUE : GL_FALSE); gl.depth_mask = zwrite; }
        set_cap(GL_POLYGON_OFFSET_FILL, gl.poly_offset, decal);
        bool cull = k.cull && !(debug_flags & 4);
        set_cap(GL_CULL_FACE, gl.cull, cull);
        if (cull && gl.cull_face != (int)k.cull) { glCullFace(k.cull == 1 ? GL_FRONT : (k.cull == 2 ? GL_BACK : GL_FRONT_AND_BACK)); gl.cull_face = k.cull; }
        set_cap(GL_SCISSOR_TEST, gl.scissor_on, !(debug_flags & 2));
        {
            int fh = current_fb->height;
            int sc[4] = { tgt_x0 + (int)std::lround(k.sc[0] * tgt_sx), tgt_y0 + (int)std::lround((fh - k.sc[3]) * tgt_sy),
                          (int)std::lround(std::max(0, k.sc[2] - k.sc[0]) * tgt_sx), (int)std::lround(std::max(0, k.sc[3] - k.sc[1]) * tgt_sy) };
            if (memcmp(sc, gl.sc, sizeof(sc))) { glScissor(sc[0], sc[1], sc[2], sc[3]); memcpy(gl.sc, sc, sizeof(sc)); }
        }

        const GLVertex* v = batch.data();
        if (!gl.attribs_on) { for (int i = 0; i < 4; i++) glEnableVertexAttribArray(i); gl.attribs_on = true; }
        glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, sizeof(GLVertex), &v->x);
        glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, sizeof(GLVertex), &v->r);
        glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, sizeof(GLVertex), &v->u0);
        glVertexAttribPointer(3, 2, GL_FLOAT, GL_FALSE, sizeof(GLVertex), &v->u1);
        glDrawArrays(GL_TRIANGLES, 0, (GLsizei)batch.size());
        stats.draw_calls++;
        batch.clear();
        current_fb->last_drawn = frame;
        current_fb->dirty = true;
        current_fb->max_row = std::max(current_fb->max_row, std::min(k.sc[3], current_fb->height));
    }

    // Builds the draw state for the current RDP settings; flushes if it differs from the batch's.
    struct TexInfo { GLuint id = 0; int w = 1, h = 1; };
    uint64_t state_serial = 1, prepared_serial = 0;
    TexInfo prepared_t0, prepared_t1;
    void prepare(bool rect, bool is_fill_or_copy, TexInfo& t0, TexInfo& t1) {
        // Nothing but vertices and triangles since the last call: same state.
        if (!rect && prepared_serial == state_serial) { t0 = prepared_t0; t1 = prepared_t1; return; }
        uint32_t cyc = cycle_type();
        DrawKey k;
        int alpha_mode = 0;
        if (cyc == G::CYC_1 || cyc == G::CYC_2) {
            if ((othermode_l & 3) == G::AC_THRESHOLD) alpha_mode = 1;
            else if ((othermode_l & G::CVG_X_ALPHA) && (othermode_l & G::ALPHA_CVG_SEL)) alpha_mode = 2;
        } else if (cyc == G::CYC_COPY && (othermode_l & 3) == G::AC_THRESHOLD) alpha_mode = 2;
        k.shader = &program_for(cyc, alpha_mode, is_fill_or_copy);

        bool want_t0 = (cyc == G::CYC_COPY) || (!is_fill_or_copy && (tex_on || rect) && combiner_uses_texel(0));
        bool want_t1 = !is_fill_or_copy && (tex_on || rect) && cyc == G::CYC_2 && combiner_uses_texel(1);
        int tile0 = rect ? rect_tile : tex_tile;
        if (want_t0) { t0.id = texture_for_tile(tile0, t0.w, t0.h); }
        if (want_t1) { t1.id = texture_for_tile((tile0 + 1) & 7, t1.w, t1.h); }
        bool linear = ((othermode_h >> G::TEXFILT_SHIFT) & 3) != 0 && cyc != G::CYC_COPY;
        k.tex0 = t0.id; k.tex1 = t1.id; k.linear0 = k.linear1 = linear;

        // Blending: the usual "in * a + mem * (1 - a)" set-up with FORCE_BL.
        uint32_t bl = othermode_l >> 16;
        int m1a = (bl >> 14) & 3, m1b = (bl >> 10) & 3, m2a = (bl >> 6) & 3, m2b = (bl >> 2) & 3;
        if (cyc == G::CYC_2) { m1a = (bl >> 12) & 3; m1b = (bl >> 8) & 3; m2a = (bl >> 4) & 3; m2b = bl & 3; }
        bool blend = (othermode_l & G::FORCE_BL) && m1a == 0 && m1b == 0 && m2a == 1 && m2b == 0;
        if (cyc == G::CYC_COPY || cyc == G::CYC_FILL) blend = false;
        k.blend = blend;

        uint32_t zmode = (othermode_l >> G::ZMODE_SHIFT) & 3;
        bool zb = rect ? ((othermode_l & G::ZS_PRIM) != 0) : ((geometry_mode & G::ZBUFFER) != 0);
        bool zt = zb && (othermode_l & G::Z_CMP) && cyc != G::CYC_COPY && cyc != G::CYC_FILL;
        bool zw = zb && (othermode_l & G::Z_UPD) && cyc != G::CYC_COPY && cyc != G::CYC_FILL;
        k.depth = (zt ? 1 : 0) | (zw ? 2 : 0) | ((zmode == G::ZMODE_DEC && zt) ? 4 : 0);

        if (!rect) {
            uint32_t c = geometry_mode & (G::CULL_FRONT | G::CULL_BACK);
            k.cull = c == (G::CULL_FRONT | G::CULL_BACK) ? 3 : c == G::CULL_FRONT ? 1 : c == G::CULL_BACK ? 2 : 0;
        }
        memcpy(k.sc, scissor, sizeof(scissor));
        memcpy(k.prim, prim, sizeof(prim));
        memcpy(k.env, env, sizeof(env));
        k.misc[0] = prim_lod; k.misc[1] = 0.0f; k.misc[2] = std::max(blend_col[3], 1.0f / 255.0f); k.misc[3] = 0;
        if (!(k == batch_key)) { flush(); batch_key = k; }
        if (!rect) { prepared_serial = state_serial; prepared_t0 = t0; prepared_t1 = t1; }
        else prepared_serial = 0;
    }
    int rect_tile = 0;

    // ---- background dumping (Config::dump_dir) ----
    // Backgrounds are big images in RDRAM drawn as strips/tiles with LOADTILE. Each one is
    // reassembled from the pieces drawn and saved as a .tga once it's complete.
    struct Canvas {
        int w = 0, h = 0; std::vector<uint32_t> px; std::vector<uint8_t> rows; uint64_t saved_hash = 0;
        bool dirty = false;
        std::unordered_map<uint32_t, GLuint> pieces; // texture last copied in at each position
    };
    std::unordered_map<uint64_t, Canvas> canvases;
    std::unordered_map<uint64_t, bool> saved_images;
    int dump_count = 0;
    // Cheap when nothing changes: a piece is only decoded when a different texture is drawn at its position.
    void capture_background(int ti, int w, int h, GLuint tex_id) {
        const Tile& t = tiles[ti & 7];
        const TmemLoad& L = loads[t.tmem & 511];
        if (!L.valid || L.block || L.width < 256 || L.width > 1024) return;
        uint64_t key = ((uint64_t)L.addr << 8) ^ (uint64_t)L.width ^ ((uint64_t)t.fmt << 40) ^ ((uint64_t)t.siz << 44);
        Canvas& c = canvases[key];
        if (c.w == 0) { c.w = L.width; c.h = 480; c.px.assign((size_t)c.w * c.h, 0); c.rows.assign(c.h, 0); }
        uint32_t pos = ((uint32_t)L.ult << 16) | (uint32_t)L.uls;
        auto pit = c.pieces.find(pos);
        if (pit != c.pieces.end() && pit->second == tex_id) return;
        c.pieces[pos] = tex_id;
        c.dirty = true;
        for (int y = 0; y < h; y++) {
            int cy = L.ult + y;
            if (cy < 0 || cy >= c.h) continue;
            for (int x = 0; x < w; x++) {
                int cx = L.uls + x;
                if (cx < 0 || cx >= c.w) continue;
                uint32_t a; int b;
                texel_source(t, L, x, y, a, b);
                if (a < 0x800000) c.px[(size_t)cy * c.w + cx] = decode_texel(t, a, b);
            }
            c.rows[cy] = 1;
        }
    }
    void save_backgrounds() {
        for (auto& [key, c] : canvases) {
            if (!c.dirty) continue;
            c.dirty = false;
            int rows = 0; while (rows < c.h && c.rows[rows]) rows++;
            if (rows < 200) continue;
            uint64_t hsh = XXH3_64bits(c.px.data(), (size_t)c.w * rows * 4);
            if (hsh == c.saved_hash || saved_images.count(hsh)) { c.saved_hash = hsh; continue; }
            c.saved_hash = hsh; saved_images[hsh] = true;
            char name[600];
            // Named by content, so the same image is never saved twice, even across sessions.
            snprintf(name, sizeof(name), "%s/background_%016llx.tga", cfg.dump_dir.c_str(), (unsigned long long)hsh);
            if (FILE* existing = fopen(name, "rb")) { fclose(existing); continue; }
            dump_count++;
            if (FILE* f = fopen(name, "wb")) {
                uint8_t hdr[18] = { 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, (uint8_t)(c.w & 0xFF), (uint8_t)(c.w >> 8), (uint8_t)(rows & 0xFF), (uint8_t)(rows >> 8), 32, 0x28 };
                fwrite(hdr, 1, 18, f);
                std::vector<uint8_t> out((size_t)c.w * rows * 4);
                for (int i = 0; i < c.w * rows; i++) { uint32_t p = c.px[i]; out[i * 4] = (uint8_t)(p >> 16); out[i * 4 + 1] = (uint8_t)(p >> 8); out[i * 4 + 2] = (uint8_t)p; out[i * 4 + 3] = (uint8_t)(p >> 24); }
                fwrite(out.data(), 1, out.size(), f);
                fclose(f);
                printf("[dump] saved %s (%dx%d)\n", name, c.w, rows);
            }
        }

    }
    int ucode_logs = 0;
    bool trace_cmds = getenv("TNT_GLES_TRACE_CMDS") != nullptr;
    bool tracing = false, trace_done = false; // TNT_GLES_TRACE_FRAME=n: log the first frame from n on that has triangles

    // ---- uv for a tile ----
    void tile_uv(int ti, float s, float t, int w, int h, float& u, float& v) const {
        const Tile& tl = tiles[ti & 7];
        auto shift = [](float c, int sh) {
            if (sh == 0) return c;
            if (sh <= 10) return c / (float)(1 << sh);
            return c * (float)(1 << (16 - sh));
        };
        float ss = shift(s, tl.shifts) / 32.0f - tl.uls / 4.0f;
        float tt = shift(t, tl.shiftt) / 32.0f - tl.ult / 4.0f;
        u = ss / (float)w;
        v = tt / (float)h;
    }

    // ---- vertices ----
    void update_mvp() {
        if (!mvp_dirty) return;
        mul(mvp, mv_stack[mv_depth], proj);
        mvp_dirty = false;
    }

    void load_vertices(uint32_t addr, int first, int count) {
        update_mvp();
        const float (&mv)[4][4] = mv_stack[mv_depth];
        float W = fb_w(), H = fb_h();
        for (int i = 0; i < count && first + i < 64; i++) {
            uint32_t a = addr + i * 16;
            float x = (int16_t)r16(a), y = (int16_t)r16(a + 2), z = (int16_t)r16(a + 4);
            float s = (int16_t)r16(a + 8), t = (int16_t)r16(a + 10);
            uint8_t c0 = r8(a + 12), c1 = r8(a + 13), c2 = r8(a + 14), c3 = r8(a + 15);
            if (tracing) printf("[vtx] %06X #%d: %6.0f %6.0f %6.0f  st %6.0f %6.0f  c %02X %02X %02X %02X\n", a, first + i, x, y, z, s, t, c0, c1, c2, c3);
            Vertex& v = verts[first + i];
            float cx = x * mvp[0][0] + y * mvp[1][0] + z * mvp[2][0] + mvp[3][0];
            float cy = x * mvp[0][1] + y * mvp[1][1] + z * mvp[2][1] + mvp[3][1];
            float cz = x * mvp[0][2] + y * mvp[1][2] + z * mvp[2][2] + mvp[3][2];
            float cw = x * mvp[0][3] + y * mvp[1][3] + z * mvp[2][3] + mvp[3][3];
            // Apply the N64 viewport (in screen pixels, y down) and convert to GL clip space.
            float vsx = vp_scale[0], vsy = vp_scale[1], vtx = vp_trans[0], vty = vp_trans[1];
            v.x = (cx * vsx + cw * vtx) / (W * 0.5f) - cw;
            v.y = cw - (cw * vty - cy * vsy) / (H * 0.5f);
            v.z = cz;
            v.w = cw;
            if (geometry_mode & G::LIGHTING) {
                float nx = (int8_t)c0 / 128.0f, ny = (int8_t)c1 / 128.0f, nz = (int8_t)c2 / 128.0f;
                float tx = nx * mv[0][0] + ny * mv[1][0] + nz * mv[2][0];
                float ty = nx * mv[0][1] + ny * mv[1][1] + nz * mv[2][1];
                float tz = nx * mv[0][2] + ny * mv[1][2] + nz * mv[2][2];
                float len = std::sqrt(tx * tx + ty * ty + tz * tz);
                if (len > 0) { tx /= len; ty /= len; tz /= len; }
                float r = light_col[num_lights][0], g = light_col[num_lights][1], b = light_col[num_lights][2]; // ambient
                for (int l = 0; l < num_lights; l++) {
                    float d = tx * light_dir[l][0] + ty * light_dir[l][1] + tz * light_dir[l][2];
                    if (d > 0) { r += d * light_col[l][0]; g += d * light_col[l][1]; b += d * light_col[l][2]; }
                }
                v.r = clampf(r, 0, 1); v.g = clampf(g, 0, 1); v.b = clampf(b, 0, 1); v.a = c3 / 255.0f;
                if (geometry_mode & G::TEXTURE_GEN) {
                    // Spherical environment mapping from the eye-space normal.
                    int w, h; tile_size(tiles[tex_tile], w, h);
                    s = (tx * 0.5f + 0.5f) * w * 32.0f / std::max(tex_scale_s, 1e-6f);
                    t = (ty * 0.5f + 0.5f) * h * 32.0f / std::max(tex_scale_t, 1e-6f);
                }
            } else {
                v.r = c0 / 255.0f; v.g = c1 / 255.0f; v.b = c2 / 255.0f; v.a = c3 / 255.0f;
            }
            v.s = s * tex_scale_s;
            v.t = t * tex_scale_t;
        }
    }

    void triangle(int i0, int i1, int i2) {
        if (i0 > 63 || i1 > 63 || i2 > 63) return;
        if (!current_fb) return;
        TexInfo t0, t1;
        prepare(false, false, t0, t1);
        const Vertex* vs[3] = { &verts[i0], &verts[i1], &verts[i2] };
        if (tracing) {
            printf("[tri] geo %06X omh %06X oml %08X comb %06X:%08X tex_on %d tile %d prim %.2f %.2f %.2f %.2f\n", geometry_mode, othermode_h, othermode_l, combine_w0, combine_w1, tex_on, tex_tile, prim[0], prim[1], prim[2], prim[3]);
            for (auto* v : vs) printf("   clip %.1f %.1f %.1f %.1f  ndc %.3f %.3f %.3f  rgba %.2f %.2f %.2f %.2f st %.1f %.1f\n", v->x, v->y, v->z, v->w, v->x / v->w, v->y / v->w, v->z / v->w, v->r, v->g, v->b, v->a, v->s, v->t);
        }
        bool flat = !(geometry_mode & G::SHADING_SMOOTH);
        bool shade = (geometry_mode & G::SHADE) != 0;
        for (int k = 0; k < 3; k++) {
            const Vertex& v = *vs[k];
            const Vertex& cv = flat ? *vs[0] : v;
            GLVertex g{};
            g.x = v.x; g.y = v.y; g.z = v.z; g.w = v.w;
            if (shade) { g.r = cv.r; g.g = cv.g; g.b = cv.b; g.a = cv.a; }
            else { g.r = g.g = g.b = g.a = 1.0f; }
            if (t0.id) tile_uv(tex_tile, v.s, v.t, t0.w, t0.h, g.u0, g.v0);
            if (t1.id) tile_uv(tex_tile + 1, v.s, v.t, t1.w, t1.h, g.u1, g.v1);
            batch.push_back(g);
        }
        stats.triangles++;
    }

    // ---- rectangles (screen space, pixels) ----
    void rect_vertices(float x0, float y0, float x1, float y1, float z, const float* uv0, const float* uv1, const float rgba[4]) {
        static const int dbg = getenv("TNT_GLES_DEBUG") ? atoi(getenv("TNT_GLES_DEBUG")) : 0;
        if ((dbg & 8) && fb_w() > 0 && !(x0 <= 0 && y0 <= 0 && x1 >= fb_w() - 1)) return; // keep full-screen clears only
        float W = fb_w(), H = fb_h();
        auto nx = [&](float x) { return x / (W * 0.5f) - 1.0f; };
        auto ny = [&](float y) { return 1.0f - y / (H * 0.5f); };
        GLVertex q[4];
        float xs[4] = { x0, x1, x0, x1 }, ys[4] = { y0, y0, y1, y1 };
        for (int i = 0; i < 4; i++) {
            q[i] = {};
            q[i].x = nx(xs[i]); q[i].y = ny(ys[i]); q[i].z = z; q[i].w = 1.0f;
            q[i].r = rgba[0]; q[i].g = rgba[1]; q[i].b = rgba[2]; q[i].a = rgba[3];
            if (uv0) { q[i].u0 = uv0[i * 2]; q[i].v0 = uv0[i * 2 + 1]; }
            if (uv1) { q[i].u1 = uv1[i * 2]; q[i].v1 = uv1[i * 2 + 1]; }
        }
        batch.push_back(q[0]); batch.push_back(q[1]); batch.push_back(q[2]);
        batch.push_back(q[1]); batch.push_back(q[3]); batch.push_back(q[2]);
        stats.rects++;
    }

    float fill_rgba[4];
    void fill_rect(float ulx, float uly, float lrx, float lry) {
        uint32_t cyc = cycle_type();
        if (cimg_addr == zimg_addr) { // clearing the depth buffer
            flush();
            pending_depth_clear = true;
            return;
        }
        if (!current_fb) return;
        if (tracing) printf("[fillrect] cyc %u (%.1f,%.1f)-(%.1f,%.1f) fill %08X prim %.2f %.2f %.2f %.2f\n", cyc, ulx, uly, lrx, lry, fill_color, prim[0], prim[1], prim[2], prim[3]);
        if (cyc == G::CYC_FILL || cyc == G::CYC_COPY) { lrx += 1; lry += 1; }
        if (cyc == G::CYC_FILL) {
            uint32_t c = fill_color;
            if (cimg_siz == G::B16) {
                uint32_t p = rgba5551((uint16_t)(c >> 16));
                fill_rgba[0] = (p & 0xFF) / 255.0f; fill_rgba[1] = ((p >> 8) & 0xFF) / 255.0f; fill_rgba[2] = ((p >> 16) & 0xFF) / 255.0f; fill_rgba[3] = 1.0f;
            } else {
                fill_rgba[0] = (c >> 24) / 255.0f; fill_rgba[1] = ((c >> 16) & 0xFF) / 255.0f; fill_rgba[2] = ((c >> 8) & 0xFF) / 255.0f; fill_rgba[3] = 1.0f;
            }
            TexInfo t0, t1;
            prepare(true, true, t0, t1);
            rect_vertices(ulx, uly, lrx, lry, -1.0f, nullptr, nullptr, fill_rgba);
            return;
        }
        // 1/2-cycle fill rects go through the combiner (usually with primitive colour).
        ulx = std::ceil(ulx); uly = std::ceil(uly); lrx = std::ceil(lrx); lry = std::ceil(lry);
        TexInfo t0, t1;
        rect_tile = 0;
        prepare(true, false, t0, t1);
        const float white[4] = { 1, 1, 1, 1 };
        float z = (othermode_l & G::ZS_PRIM) ? prim_depth * 2.0f - 1.0f : -1.0f;
        rect_vertices(ulx, uly, lrx, lry, z, nullptr, nullptr, white);
    }

    void tex_rect(uint32_t w0, uint32_t w1, uint32_t h1, uint32_t h2, bool flip) {
        if (!current_fb) return;
        float lrx = ((w0 >> 12) & 0xFFF) / 4.0f, lry = (w0 & 0xFFF) / 4.0f;
        int tile = (w1 >> 24) & 7;
        float ulx = ((w1 >> 12) & 0xFFF) / 4.0f, uly = (w1 & 0xFFF) / 4.0f;
        float s = (int16_t)(h1 >> 16) / 32.0f, t = (int16_t)(h1 & 0xFFFF) / 32.0f;
        float dsdx = (int16_t)(h2 >> 16) / 1024.0f, dtdy = (int16_t)(h2 & 0xFFFF) / 1024.0f;
        uint32_t cyc = cycle_type();
        if (cyc == G::CYC_COPY) { dsdx /= 4.0f; lrx += 1; lry += 1; }
        else if (cyc == G::CYC_FILL) { lrx += 1; lry += 1; }
        else {
            // 1/2-cycle: whole pixels from ceil(ul) up to (not including) ceil(lr).
            float nulx = std::ceil(ulx), nuly = std::ceil(uly);
            s += (nulx - ulx) * dsdx; t += (nuly - uly) * dtdy;
            ulx = nulx; uly = nuly; lrx = std::ceil(lrx); lry = std::ceil(lry);
        }
        rect_tile = tile;
        TexInfo t0, t1;
        prepare(true, cyc == G::CYC_COPY, t0, t1);
        if (!cfg.dump_dir.empty()) capture_background(tile, t0.w, t0.h, t0.id);
        if (tracing) {
            const Tile& T = tiles[tile]; const TmemLoad& L = loads[T.tmem & 511];
            printf("[texrect] cyc %u (%.1f,%.1f)-(%.1f,%.1f) tile %d fmt %d siz %d tmem %d addr %06X %s st %.1f %.1f d %.3f %.3f tex %u %dx%d comb %06X:%08X oml %08X blend %u\n",
                cyc, ulx, uly, lrx, lry, tile, T.fmt, T.siz, T.tmem, L.addr, L.valid ? (L.block ? "block" : "tile") : "none", s, t, dsdx, dtdy, t0.id, t0.w, t0.h, combine_w0, combine_w1, othermode_l, batch_key.blend);
        }
        const Tile& tl = tiles[tile];
        float s0 = s - tl.uls / 4.0f, t0c = t - tl.ult / 4.0f;
        float s1 = s0 + dsdx * (lrx - ulx), t1c = t0c + dtdy * (lry - uly);
        float uv[8], uvb[8];
        auto set = [&](float* o, int w, int h) {
            float u0 = s0 / w, u1 = s1 / w, v0 = t0c / h, v1 = t1c / h;
            if (!flip) { o[0] = u0; o[1] = v0; o[2] = u1; o[3] = v0; o[4] = u0; o[5] = v1; o[6] = u1; o[7] = v1; }
            else {
                // Flipped: s runs down, t runs across.
                float fu1 = s0 / w + dsdx * (lry - uly) / w, fv1 = t0c / h + dtdy * (lrx - ulx) / h;
                o[0] = u0; o[1] = v0; o[2] = u0; o[3] = fv1; o[4] = fu1; o[5] = v0; o[6] = fu1; o[7] = fv1;
            }
        };
        set(uv, t0.w, t0.h);
        set(uvb, t1.w, t1.h);
        const float white[4] = { 1, 1, 1, 1 };
        float z = (othermode_l & G::ZS_PRIM) ? prim_depth * 2.0f - 1.0f : -1.0f;
        rect_vertices(ulx, uly, lrx, lry, z, uv, uvb, white);
    }

    // ---- display list ----
    void run(uint32_t start) {
        uint32_t stack[18]; int sp = 0;
        uint32_t pc = phys(start);
        for (int guard = 0; guard < 1000000; guard++) {
            if (pc >= 0x800000 - 8) return;
            uint32_t w0 = r32(pc), w1 = r32(pc + 4);
            pc += 8;
            uint8_t op = w0 >> 24;
            if (op >= 0xD0 || op == 0x04) state_serial++;
            if (tracing && trace_cmds) printf("[cmd] %06X: %08X %08X\n", pc - 8, w0, w1);
            switch (op) {
                case 0x00: break;                                           // G_SPNOOP
                case 0x01: {                                                // G_VTX
                    int n = (w0 >> 12) & 0xFF, end = (w0 >> 1) & 0x7F;
                    load_vertices(phys(w1), end - n, n);
                    break;
                }
                case 0x02: {                                                // G_MODIFYVTX
                    int where = (w0 >> 16) & 0xFF, idx = ((w0 & 0xFFFF) >> 1);
                    if (idx < 64) {
                        Vertex& v = verts[idx];
                        if (where == 0x10) { v.r = (w1 >> 24) / 255.0f; v.g = ((w1 >> 16) & 0xFF) / 255.0f; v.b = ((w1 >> 8) & 0xFF) / 255.0f; v.a = (w1 & 0xFF) / 255.0f; }
                        else if (where == 0x14) { v.s = (int16_t)(w1 >> 16); v.t = (int16_t)(w1 & 0xFFFF); } // already scaled
                        else if (where == 0x18) {
                            // Screen position (10.2 pixels): The New Tetris places its pieces this way.
                            float sx = (int16_t)(w1 >> 16) / 4.0f, sy = (int16_t)(w1 & 0xFFFF) / 4.0f;
                            float z = v.w > 0 ? clampf(v.z / v.w, -1.0f, 1.0f) : 0.0f;
                            v.x = sx / (fb_w() * 0.5f) - 1.0f;
                            v.y = 1.0f - sy / (fb_h() * 0.5f);
                            v.z = z; v.w = 1.0f;
                        } else if (where == 0x1C) {
                            // Screen depth, 16.16 in the viewport's 0..1022 range.
                            float zs = (int32_t)w1 / 65536.0f;
                            float zn = clampf((zs - 511.0f) / 511.0f, -1.0f, 1.0f);
                            v.z = zn * v.w;
                        }
                    }
                    break;
                }
                case 0x03: break;                                           // G_CULLDL (never culls)
                case 0x04: {                                                // G_BRANCH_Z: always take the near branch
                    flush();
                    pc = phys(rdphalf1);
                    break;
                }
                case 0x05:                                                  // G_TRI1
                    triangle(((w0 >> 16) & 0xFF) / 2, ((w0 >> 8) & 0xFF) / 2, (w0 & 0xFF) / 2);
                    break;
                case 0x06:                                                  // G_TRI2
                    triangle(((w0 >> 16) & 0xFF) / 2, ((w0 >> 8) & 0xFF) / 2, (w0 & 0xFF) / 2);
                    triangle(((w1 >> 16) & 0xFF) / 2, ((w1 >> 8) & 0xFF) / 2, (w1 & 0xFF) / 2);
                    break;
                case 0x07:                                                  // G_QUAD
                    triangle(((w0 >> 16) & 0xFF) / 2, ((w0 >> 8) & 0xFF) / 2, (w0 & 0xFF) / 2);
                    triangle(((w1 >> 16) & 0xFF) / 2, ((w1 >> 8) & 0xFF) / 2, (w1 & 0xFF) / 2);
                    break;
                case 0xD7: {                                                // G_TEXTURE
                    tex_scale_s = (w1 >> 16) / 65536.0f;
                    tex_scale_t = (w1 & 0xFFFF) / 65536.0f;
                    tex_tile = (w0 >> 8) & 7;
                    tex_on = (w0 & 0xFE) != 0;
                    break;
                }
                case 0xD8: {                                                // G_POPMTX
                    int n = w1 / 64;
                    mv_depth = std::max(0, mv_depth - n);
                    mvp_dirty = true;
                    break;
                }
                case 0xD9:                                                  // G_GEOMETRYMODE
                    flush();
                    geometry_mode = (geometry_mode & (w0 & 0xFFFFFF)) | w1;
                    break;
                case 0xDA: {                                                // G_MTX
                    uint32_t params = (w0 & 0xFF) ^ 1; // F3DEX2 inverts the push bit
                    float m[4][4];
                    load_matrix(phys(w1), m);
                    {
                        if (tracing) {
                            printf("[mtx] w0 %08X params %X depth %d\n", w0, params, mv_depth);
                            for (int i = 0; i < 4; i++) printf("   %10.4f %10.4f %10.4f %10.4f\n", m[i][0], m[i][1], m[i][2], m[i][3]);
                        }
                    }
                    if (params & 4) { // projection
                        if (params & 2) memcpy(proj, m, sizeof(m)); else mul(proj, m, proj);
                    } else {
                        if ((params & 1) && mv_depth < 9) { memcpy(mv_stack[mv_depth + 1], mv_stack[mv_depth], sizeof(m)); mv_depth++; }
                        if (params & 2) memcpy(mv_stack[mv_depth], m, sizeof(m)); else mul(mv_stack[mv_depth], m, mv_stack[mv_depth]);
                    }
                    mvp_dirty = true;
                    break;
                }
                case 0xDB: {                                                // G_MOVEWORD
                    int index = (w0 >> 16) & 0xFF, offset = w0 & 0xFFFF;
                    if (tracing) printf("[moveword] index %d offset %d value %08X\n", index, offset, w1);
                    if (index == 6) segments[(offset >> 2) & 0xF] = w1 & 0xFFFFFF;
                    else if (index == 2) num_lights = std::clamp((int)(w1 / 24), 0, 7);
                    break;
                }
                case 0xDC: {                                                // G_MOVEMEM
                    int index = w0 & 0xFF, offset = ((w0 >> 8) & 0xFF) * 8;
                    uint32_t a = phys(w1);
                    {
                        if (tracing) printf("[movemem] index %d offset %d addr %06X\n", index, offset, a);
                    }
                    if (index == 8) { // viewport
                        for (int i = 0; i < 4; i++) {
                            vp_scale[i] = (int16_t)r16(a + i * 2) / 4.0f;
                            vp_trans[i] = (int16_t)r16(a + 8 + i * 2) / 4.0f;
                        }
                    } else if (index == 10) { // lights: 0 and 24 are lookat, then lights
                        int l = (offset - 24) / 24;
                        if (l >= 0 && l < 8) {
                            light_col[l][0] = r8(a) / 255.0f; light_col[l][1] = r8(a + 1) / 255.0f; light_col[l][2] = r8(a + 2) / 255.0f;
                            float dx = (int8_t)r8(a + 8), dy = (int8_t)r8(a + 9), dz = (int8_t)r8(a + 10);
                            float len = std::sqrt(dx * dx + dy * dy + dz * dz);
                            if (len > 0) { dx /= len; dy /= len; dz /= len; }
                            light_dir[l][0] = dx; light_dir[l][1] = dy; light_dir[l][2] = dz;
                        }
                    }
                    break;
                }
                case 0xDD:                                                  // G_LOAD_UCODE
                    if (tracing || ucode_logs < 10) { ucode_logs++; printf("[gfx] G_LOAD_UCODE text %08X data %08X size %X\n", w1, rdphalf1, (w0 & 0xFFFF) + 1); }
                    break;
                case 0xDE: {                                                // G_DL
                    if (((w0 >> 16) & 0xFF) == 0) { if (sp >= 18) return; stack[sp++] = pc; }
                    pc = phys(w1);
                    break;
                }
                case 0xDF:                                                  // G_ENDDL
                    if (sp == 0) return;
                    pc = stack[--sp];
                    break;
                case 0xE1: rdphalf1 = w1; break;                            // G_RDPHALF_1
                case 0xF1: rdphalf2 = w1; break;                            // G_RDPHALF_2
                case 0xE2: case 0xE3: {                                     // G_SETOTHERMODE_L / _H
                    int len = (w0 & 0xFF) + 1, shift = 32 - ((w0 >> 8) & 0xFF) - len;
                    if (shift < 0) shift = 0;
                    uint32_t mask = (len >= 32 ? 0xFFFFFFFFu : ((1u << len) - 1)) << shift;
                    flush();
                    if (op == 0xE2) othermode_l = (othermode_l & ~mask) | (w1 & mask);
                    else othermode_h = (othermode_h & ~mask) | (w1 & mask);
                    break;
                }
                case 0xEF:                                                  // G_RDPSETOTHERMODE
                    flush();
                    othermode_h = w0 & 0xFFFFFF;
                    othermode_l = w1;
                    break;
                case 0xE4: case 0xE5: {                                     // G_TEXRECT / FLIP
                    uint32_t h1 = 0, h2 = 0;
                    // Followed by RDPHALF_1 (s, t) and RDPHALF_2 (dsdx, dtdy).
                    for (int i = 0; i < 2; i++) {
                        uint32_t a0 = r32(pc), a1 = r32(pc + 4);
                        if ((a0 >> 24) == 0xE1) { h1 = a1; pc += 8; }
                        else if ((a0 >> 24) == 0xF1) { h2 = a1; pc += 8; }
                    }
                    tex_rect(w0, w1, h1, h2, op == 0xE5);
                    break;
                }
                case 0xE6: case 0xE7: case 0xE8: case 0xE9: break;          // syncs
                case 0xED: {                                                // G_SETSCISSOR
                    flush();
                    scissor[0] = ((w0 >> 12) & 0xFFF) / 4; scissor[1] = (w0 & 0xFFF) / 4;
                    scissor[2] = ((w1 >> 12) & 0xFFF) / 4; scissor[3] = (w1 & 0xFFF) / 4;
                    break;
                }
                case 0xEE: prim_depth = ((w1 >> 16) & 0x7FFF) / 32767.0f; break; // G_SETPRIMDEPTH
                case 0xF0: {                                                // G_LOADTLUT
                    int tile = (w1 >> 24) & 7;
                    int count = ((w1 >> 14) & 0x3FF) + 1;
                    int start = tiles[tile].tmem - 256;
                    uint32_t src = timg_addr + ((w0 >> 14) & 0x3FF) * 2;
                    for (int i = 0; i < count && start + i < 256; i++)
                        if (start + i >= 0) tlut[start + i] = r16(src + i * 2);
                    break;
                }
                case 0xF2: {                                                // G_SETTILESIZE
                    int tile = (w1 >> 24) & 7;
                    Tile& t = tiles[tile];
                    t.uls = (w0 >> 12) & 0xFFF; t.ult = w0 & 0xFFF; t.lrs = (w1 >> 12) & 0xFFF; t.lrt = w1 & 0xFFF;
                    break;
                }
                case 0xF3: {                                                // G_LOADBLOCK
                    int tile = (w1 >> 24) & 7;
                    int uls = (w0 >> 12) & 0xFFF, ult = w0 & 0xFFF;
                    TmemLoad& L = loads[tiles[tile].tmem & 511];
                    L.valid = true; L.block = true; L.siz = timg_siz; L.width = timg_width;
                    L.addr = timg_addr + (uint32_t)((ult * timg_width + uls) * bits_of(timg_siz) / 8);
                    break;
                }
                case 0xF4: {                                                // G_LOADTILE
                    int tile = (w1 >> 24) & 7;
                    TmemLoad& L = loads[tiles[tile].tmem & 511];
                    L.valid = true; L.block = false; L.siz = timg_siz; L.width = timg_width;
                    L.uls = ((w0 >> 12) & 0xFFF) >> 2; L.ult = (w0 & 0xFFF) >> 2;
                    L.addr = timg_addr;
                    break;
                }
                case 0xF5: {                                                // G_SETTILE
                    int tile = (w1 >> 24) & 7;
                    Tile& t = tiles[tile];
                    t.fmt = (w0 >> 21) & 7; t.siz = (w0 >> 19) & 3; t.line = (w0 >> 9) & 0x1FF; t.tmem = w0 & 0x1FF;
                    t.palette = (w1 >> 20) & 0xF; t.cmt = (w1 >> 18) & 3; t.maskt = (w1 >> 14) & 0xF; t.shiftt = (w1 >> 10) & 0xF;
                    t.cms = (w1 >> 8) & 3; t.masks = (w1 >> 4) & 0xF; t.shifts = w1 & 0xF;
                    break;
                }
                case 0xF6: {                                                // G_FILLRECT
                    float lrx = ((w0 >> 12) & 0xFFF) / 4.0f, lry = (w0 & 0xFFF) / 4.0f;
                    float ulx = ((w1 >> 12) & 0xFFF) / 4.0f, uly = (w1 & 0xFFF) / 4.0f;
                    fill_rect(ulx, uly, lrx, lry);
                    break;
                }
                case 0xF7: fill_color = w1; break;                          // G_SETFILLCOLOR
                case 0xF8: fog_col[0] = (w1 >> 24) / 255.0f; fog_col[1] = ((w1 >> 16) & 0xFF) / 255.0f; fog_col[2] = ((w1 >> 8) & 0xFF) / 255.0f; fog_col[3] = (w1 & 0xFF) / 255.0f; break;
                case 0xF9: blend_col[0] = (w1 >> 24) / 255.0f; blend_col[1] = ((w1 >> 16) & 0xFF) / 255.0f; blend_col[2] = ((w1 >> 8) & 0xFF) / 255.0f; blend_col[3] = (w1 & 0xFF) / 255.0f; break;
                case 0xFA:                                                  // G_SETPRIMCOLOR
                    prim[0] = (w1 >> 24) / 255.0f; prim[1] = ((w1 >> 16) & 0xFF) / 255.0f; prim[2] = ((w1 >> 8) & 0xFF) / 255.0f; prim[3] = (w1 & 0xFF) / 255.0f;
                    prim_lod = (w0 & 0xFF) / 255.0f;
                    break;
                case 0xFB:                                                  // G_SETENVCOLOR
                    env[0] = (w1 >> 24) / 255.0f; env[1] = ((w1 >> 16) & 0xFF) / 255.0f; env[2] = ((w1 >> 8) & 0xFF) / 255.0f; env[3] = (w1 & 0xFF) / 255.0f;
                    break;
                case 0xFC:                                                  // G_SETCOMBINE
                    flush();
                    combine_w0 = w0 & 0xFFFFFF; combine_w1 = w1;
                    break;
                case 0xFD:                                                  // G_SETTIMG
                    timg_fmt = (w0 >> 21) & 7; timg_siz = (w0 >> 19) & 3; timg_width = (w0 & 0xFFF) + 1;
                    timg_addr = phys(w1);
                    break;
                case 0xFE:                                                  // G_SETZIMG
                    zimg_addr = phys(w1);
                    break;
                case 0xFF:                                                  // G_SETCIMG
                    flush();
                    cimg_siz = (w0 >> 19) & 3; cimg_width = (w0 & 0xFFF) + 1;
                    cimg_addr = phys(w1);
                    if (tracing) printf("[cimg] %06X\n", cimg_addr);
                    if (getenv("TNT_GLES_CIMG") && frame % 100 == 0) printf("[cimg] frame %llu: 0x%06X w %d siz %d (tris so far %u rects %u)\n", (unsigned long long)frame, cimg_addr, cimg_width, cimg_siz, stats.triangles, stats.rects);
                    bind_color_image();
                    break;
                default:
                    stats.unknown_commands++;
                    break;
            }
        }
    }
};

Renderer::Renderer(uint8_t* rdram, const Config& config) : impl(std::make_unique<Impl>(rdram, config)) {}
Renderer::~Renderer() = default;

void Renderer::process_dl(uint32_t dl_addr) {
    auto t0 = std::chrono::steady_clock::now();
    Impl& I = *impl;
    I.stats = {};
    I.frame++;
    memset(I.segments, 0, sizeof(I.segments));
    static const long trace_from = getenv("TNT_GLES_TRACE_FRAME") ? atol(getenv("TNT_GLES_TRACE_FRAME")) : -1;
    I.tracing = trace_from >= 0 && (long)I.frame >= trace_from && !I.trace_done;
    I.run(dl_addr);
    if (!I.cfg.dump_dir.empty()) I.save_backgrounds();
    if (I.tracing && I.stats.triangles) I.trace_done = true;
    I.tracing = false;
    I.leave_framebuffer();
    I.evict_textures();
    I.stats.textures_cached = (uint32_t)I.textures.size();
    I.stats.framebuffers = (uint32_t)I.framebuffers.size();
    I.stats.dl_ms = std::chrono::duration<double, std::milli>(std::chrono::steady_clock::now() - t0).count();
    I.last = I.stats;
}

bool Renderer::present(uint32_t vi_origin) {
    Impl& I = *impl;
    I.flush();
    uint32_t origin = vi_origin & 0x7FFFFF;
    Framebuffer* best = nullptr;
    for (auto& f : I.framebuffers) {
        uint32_t size = (uint32_t)f.width * f.height * 2;
        if (origin >= f.addr && origin < f.addr + size && (!best || f.addr > best->addr)) best = &f;
    }
    if (best && I.cfg.direct_to_screen && best->presented && best->direct_shown) return false; // drawn straight to the screen
    if (best) best->presented = true;
    glBindFramebuffer(GL_FRAMEBUFFER, 0);
    glDisable(GL_SCISSOR_TEST);
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_BLEND);
    glDisable(GL_CULL_FACE);
    glDepthMask(GL_TRUE);
    glViewport(0, 0, I.cfg.output_width, I.cfg.output_height);
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    if (!best) return false;
    // 4:3 letterbox.
    int h = I.cfg.output_height, w = h * 4 / 3;
    if (w > I.cfg.output_width) { w = I.cfg.output_width; h = w * 3 / 4; }
    glViewport((I.cfg.output_width - w) / 2, (I.cfg.output_height - h) / 2, w, h);
    glUseProgram(I.present_prog.prog);
    glUniform1i(I.present_prog.uTex0, 0);
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, best->tex);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, I.cfg.linear_present ? GL_LINEAR : GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, I.cfg.linear_present ? GL_LINEAR : GL_NEAREST);
    static const GLVertex quad[6] = {
        { -1, -1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0 }, { 1, -1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { -1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0 },
        { 1, -1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 }, { 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0 }, { -1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0 },
    };
    glEnableVertexAttribArray(0); glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, sizeof(GLVertex), &quad[0].x);
    glEnableVertexAttribArray(1); glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, sizeof(GLVertex), &quad[0].r);
    glEnableVertexAttribArray(2); glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, sizeof(GLVertex), &quad[0].u0);
    glEnableVertexAttribArray(3); glVertexAttribPointer(3, 2, GL_FLOAT, GL_FALSE, sizeof(GLVertex), &quad[0].u1);
    glDrawArrays(GL_TRIANGLES, 0, 6);
    I.forget_gl_state();
    // Make the next display list rebind its framebuffer.
    I.current_fb = nullptr;
    return true;
}

bool Renderer::end_frame() {
    Impl& I = *impl;
    I.flush();
    if (!I.display_drawn) return false;
    I.display_drawn = false;
    for (auto& f : I.framebuffers) if (f.presented) f.direct_shown = true;
    return true;
}

const Stats& Renderer::last_stats() const { return impl->last; }

} // namespace n64gfx
