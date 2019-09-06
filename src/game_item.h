#ifndef GAMEITEM_H
#define GAMEITEM_H

#include <vector>
#include <string>

class Game_Item {
    public:
        
        // Inner enum with allowed movements
        enum DirectionEnum {up, down, left, right};
        DirectionEnum allowedDirections;

        // Constructor
        Game_Item(int grid_width, int grid_height, DirectionEnum directions) :
            grid_width(grid_width),
            gird_height(gird_height),
            allowedDirections(directions) {}

        // Method or macro method to include in an update cycle
        void virtual Update();
        void virtual HandleCollision();

        // TODO: to be added later
        // TODO: default hasImage set to false
        // Item images
        // bool hasImage;
        // SDL_image image;

    private:
        // Game grid if necessary for item position and movement
        int grid_width;
        int gird_height;

};

#endif