#include "game_state.h"
#include <algorithm>

static float axis(float v) { return std::max(-1.0f, std::min(1.0f, v)); }

void GameState::update(const InputState& in, float delta_seconds) {
    if (in.pause) paused_ = !paused_;
    if (paused_) return;

    const float dt = std::max(0.0f, std::min(delta_seconds, 0.05f));
    constexpr float speed = 4.0f;
    player_.velocity = {axis(in.move_x)*speed,
                        axis(in.vertical)*speed,
                        axis(in.move_z)*speed};
    player_.position.x += player_.velocity.x * dt;
    player_.position.y += player_.velocity.y * dt;
    player_.position.z += player_.velocity.z * dt;
    player_.air = std::max(0.0f, player_.air - 0.15f*dt);

    if (in.interact && player_.collected_items == 0)
        ++player_.collected_items;
}
