#pragma once
#include <cstdint>

struct Vec3 { float x=0, y=0, z=0; };

struct PlayerState {
    Vec3 position{};
    Vec3 velocity{};
    float air = 100.0f;
    float health = 100.0f;
    std::uint32_t collected_items = 0;
};

struct InputState {
    float move_x = 0.0f;
    float move_z = 0.0f;
    float vertical = 0.0f;
    bool interact = false;
    bool pause = false;
};

class GameState {
public:
    void update(const InputState& input, float delta_seconds);
    const PlayerState& player() const { return player_; }
    bool paused() const { return paused_; }
    bool objective_complete() const { return player_.collected_items >= 1; }
private:
    PlayerState player_{};
    bool paused_ = false;
};
