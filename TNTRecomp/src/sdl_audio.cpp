// SDL2 audio output for the game's AI buffers.
//
// Two implementations (TNT_AUDIO=old|stream, default stream):
//  - stream: SDL_AudioStream resamples the game's 36 kHz S16 stereo to the device rate
//    with filter state carried across buffers. No audio is thrown away unless the queue
//    passes a hard ceiling.
//  - old:    the first version: SDL_AudioCVT per buffer (stateless) and drops whole
//    buffers above 150 ms queued. Kept to reproduce/compare.
#include "sdl_audio.hpp"
#include <algorithm>
#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <vector>
#include "SDL.h"

namespace {
    SDL_AudioDeviceID device = 0;
    uint32_t game_rate = 48000, device_rate = 48000;
    std::mutex mutex;
    bool use_stream = true;
    uint64_t headroom_vis = 2; // settings.ini [audio] audio_latency, or TNT_AUDIO_HEADROOM=<VIs>
    std::atomic<float> volume{ 1.0f };
    void apply_volume(float* f, size_t n) {
        float v = volume.load();
        if (v >= 0.999f) return;
        for (size_t i = 0; i < n; i++) f[i] *= v;
    }

    SDL_AudioStream* stream = nullptr;
    SDL_AudioCVT cvt{};

    std::atomic<uint64_t> frames_in{0}, buffers_in{0}, buffers_dropped{0}, underruns{0};

    constexpr int device_channels = 2;
    constexpr size_t device_frame_bytes = device_channels * sizeof(float);

    void rebuild() {
        if (use_stream) {
            if (stream) SDL_FreeAudioStream(stream);
            stream = SDL_NewAudioStream(AUDIO_S16SYS, 2, (int)game_rate, AUDIO_F32SYS, device_channels, (int)device_rate);
            if (!stream) fprintf(stderr, "[audio] SDL_NewAudioStream failed: %s\n", SDL_GetError());
        } else {
            if (SDL_BuildAudioCVT(&cvt, AUDIO_F32, 2, game_rate, AUDIO_F32, 2, device_rate) < 0)
                fprintf(stderr, "[audio] SDL_BuildAudioCVT failed: %s\n", SDL_GetError());
        }
    }

    double queued_ms_locked() {
        if (!device) return 0.0;
        return SDL_GetQueuedAudioSize(device) / double(device_frame_bytes) * 1000.0 / device_rate;
    }
}

void tnt::audio::open() {
    if (const char* impl = std::getenv("TNT_AUDIO")) use_stream = std::strcmp(impl, "old") != 0;
    if (const char* h = std::getenv("TNT_AUDIO_HEADROOM")) headroom_vis = std::strtoull(h, nullptr, 10);
    if (SDL_InitSubSystem(SDL_INIT_AUDIO) != 0) {
        fprintf(stderr, "[audio] SDL audio init failed: %s (continuing without sound)\n", SDL_GetError());
        return;
    }
    SDL_AudioSpec want{}, have{};
    want.freq = 48000; want.format = AUDIO_F32SYS; want.channels = device_channels; want.samples = 512;
    device = SDL_OpenAudioDevice(nullptr, 0, &want, &have, SDL_AUDIO_ALLOW_FREQUENCY_CHANGE);
    if (!device) {
        fprintf(stderr, "[audio] no audio device: %s (continuing without sound)\n", SDL_GetError());
        return;
    }
    device_rate = have.freq;
    printf("[audio] device %d Hz, %d-frame buffer, driver %s, %s resampler\n", have.freq, have.samples,
        SDL_GetCurrentAudioDriver(), use_stream ? "stream" : "old");
    std::lock_guard lock{ mutex };
    rebuild();
    SDL_PauseAudioDevice(device, 0);
}

void tnt::audio::set_frequency(uint32_t freq) {
    std::lock_guard lock{ mutex };
    game_rate = freq;
    printf("[audio] game output rate %u Hz\n", freq);
    if (device) rebuild();
}

void tnt::audio::queue_samples(int16_t* data, size_t count) {
    if (!device) return;
    // The AI length register is 18 bits. A larger count is a wrapped negative length from
    // the game's buffer maths; real hardware would never see it. Ignore it.
    if (count * sizeof(int16_t) > 0x3FFF8) { buffers_dropped++; return; }
    std::lock_guard lock{ mutex };
    size_t frames = count / 2;
    frames_in += frames;
    buffers_in++;
    if (SDL_GetQueuedAudioSize(device) == 0 && buffers_in > 30) underruns++;

    if (use_stream) {
        if (!stream) return;
        // RDRAM holds each stereo frame as (R, L) after the halfword swap: put L first.
        static std::vector<int16_t> lr;
        lr.resize(frames * 2);
        for (size_t i = 0; i < frames; i++) { lr[2 * i] = data[2 * i + 1]; lr[2 * i + 1] = data[2 * i]; }
        SDL_AudioStreamPut(stream, lr.data(), (int)(lr.size() * sizeof(int16_t)));
        int avail = SDL_AudioStreamAvailable(stream);
        if (avail <= 0) return;
        static std::vector<uint8_t> out;
        out.resize(avail);
        int got = SDL_AudioStreamGet(stream, out.data(), avail);
        // Hard ceiling only: if half a second has piled up, something is wrong upstream; skip.
        if (queued_ms_locked() > 500.0) { buffers_dropped++; return; }
        if (got > 0) {
            apply_volume(reinterpret_cast<float*>(out.data()), (size_t)got / sizeof(float));
            SDL_QueueAudio(device, out.data(), got);
        }
    } else {
        static std::vector<float> buf;
        size_t need = (size_t)(count * std::max(1.0, cvt.len_ratio)) + 64;
        if (buf.size() < need * std::max(1, cvt.len_mult)) buf.resize(need * std::max(1, cvt.len_mult));
        for (size_t i = 0; i < frames; i++) {
            buf[2 * i + 0] = data[2 * i + 1] * (1.0f / 32768.0f);
            buf[2 * i + 1] = data[2 * i + 0] * (1.0f / 32768.0f);
        }
        cvt.buf = reinterpret_cast<Uint8*>(buf.data());
        cvt.len = (int)(frames * 2 * sizeof(float));
        if (cvt.needed) SDL_ConvertAudio(&cvt);
        int out_bytes = cvt.needed ? cvt.len_cvt : cvt.len;
        if (queued_ms_locked() > 150.0) { buffers_dropped++; return; }
        apply_volume(buf.data(), (size_t)out_bytes / sizeof(float));
        SDL_QueueAudio(device, buf.data(), out_bytes);
    }
}

size_t tnt::audio::frames_remaining() {
    if (!device) return 0;
    std::lock_guard lock{ mutex };
    uint64_t dev_frames = SDL_GetQueuedAudioSize(device) / device_frame_bytes;
    uint64_t pending = 0;
    if (use_stream && stream) pending = SDL_AudioStreamAvailable(stream) / device_frame_bytes;
    uint64_t queued = (dev_frames + pending) * game_rate / std::max<uint32_t>(device_rate, 1);
    // The game sizes each buffer as (target - osAiGetLength()). Real hardware only reports
    // what's left of the current DMA, so:
    //  - hide `headroom` frames, so the game keeps that much extra queued and the device
    //    (which pulls ~10 ms at a time) never runs dry;
    //  - never report more than one VI's worth, or the game's maths goes negative.
    uint64_t per_vi = game_rate / 60;
    uint64_t headroom = per_vi * headroom_vis;
    uint64_t reported = queued > headroom ? queued - headroom : 0;
    return (size_t)std::min<uint64_t>(reported, per_vi);
}

tnt::audio::Stats tnt::audio::stats() {
    std::lock_guard lock{ mutex };
    return { game_rate, device_rate, frames_in.load(), buffers_in.load(), buffers_dropped.load(), underruns.load(),
             queued_ms_locked(), use_stream ? "stream" : "old" };
}

void tnt::audio::set_volume(int percent) {
    percent = std::clamp(percent, 0, 100);
    // Perceptual curve: 50% is about -12 dB rather than -6 dB.
    float v = percent / 100.0f;
    volume = v * v;
}

void tnt::audio::set_latency(int frames) {
    std::lock_guard lock{ mutex };
    headroom_vis = (uint64_t)std::clamp(frames, 0, 16);
}
