#include "game_state.h"
#include <cstdio>

int main() {
    GameState game;
    InputState input{};
    input.move_x = 0.25f;
    game.update(input, 1.0f/60.0f);
    const auto& p = game.player();
    std::puts("Freediver's Adventures Dangerous 4 FT Chiyoko");
    std::printf("Posicao: %.2f %.2f %.2f | Ar: %.1f | Saude: %.1f\n",
                p.position.x, p.position.y, p.position.z, p.air, p.health);
    return 0;
}
