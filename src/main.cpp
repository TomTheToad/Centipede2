#include <iostream>
#include "render_controller.h"
#include "player_cannon.h"

int main() {

    // Game time constants
    constexpr std::size_t kFramesPerSecond{60};
    constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};

    // Game screen dimensions
    constexpr std::size_t kScreenWidth{640};
    constexpr std::size_t kScreenHeight{640};

    // Game playable grid densions
    constexpr std::size_t kGridWidth{32};
    constexpr std::size_t kGridHeight{32};

    // Initialize Render Controller
    Render_Controller render_controller(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);

    // Initialize Player Cannon test
    Player_Cannon cannon(10, 10);

    // test var
    // bool isRunning = true;

    // TODO: remove - test log
    // while(isRunning) {
    //     render_controller.Render(cannon);
    //     if (std::cin.ignore()) {
    //         isRunning = false;
    //     }
    // }

    // render_controller.Render(cannon);

    // render_controller.~Render_Controller();

    return 0;
}