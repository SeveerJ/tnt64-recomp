#pragma once
#include <cstddef>
#include <cstdint>
namespace tnt::audio {
    // Opens the default SDL audio device. Safe to call once SDL_INIT_AUDIO is available.
    void open();
    void queue_samples(int16_t* data, size_t sample_count); // RDRAM-order stereo (R, L words)
    size_t frames_remaining();                               // queued audio, in game-rate frames
    void set_frequency(uint32_t freq);
    struct Stats {
        uint32_t game_rate, device_rate;
        uint64_t frames_in, buffers_in, buffers_dropped, underruns;
        double queued_ms;
        const char* impl;
    };
    Stats stats();
    void set_volume(int percent);   // 0-100
    void set_latency(int frames);   // extra frames of audio kept queued (default 2)
}
