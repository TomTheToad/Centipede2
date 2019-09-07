#ifndef GAME_ITEM_H
#define GAME_ITEM_H

#include <vector>
#include <string>

class Game_Item {
    public:
        
        // Inner enum with allowed movements
        enum class Base_Moves {kUp, kDown, kLeft, kRight};
        std::vector<Base_Moves> allowed_moves = {};

        Game_Item() { }
        virtual ~Game_Item() {}

        // Method or macro method to include in an update cycle
        void virtual Update() {}
        void virtual HandleCollision() {}

        int x = 0;
        int y = 0;

};

#endif