#ifndef PLAYER_CANNON_H
#define PLAYER_CANNON_H

#include "game_item.h"
#include <vector>
#include <iostream>

class Player_Cannon: public Game_Item {
    protected:
        std::vector<Base_Moves> cannon_moves = {Base_Moves::kLeft, Base_Moves::kRight};

    public:

        Player_Cannon(int x, int y) : Game_Item() {
            x = x;
            y = y;
        }

        ~Player_Cannon() {}

        void Update() {
            // do something
        }

        void HandleCollision() {
            // do something
        }
    
};

#endif
