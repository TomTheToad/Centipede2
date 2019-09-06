#ifndef RENDER_CONTROLLER_H
#define RENDER_CONTROLLER_H

#include "SDL.h"

class Render_Controller {
    public:
        // Constructor
        Render_Controller(
            const std::size_t screen_width,
            const std::size_t screen_height,
            const std::size_t grid_width,
            const std::size_t grid_height
        );

        // Destructor
        ~Render_Controller();

        // Methods
        void Render();
        // UpdateWindowTitle();

    private:
        // SDL pointers
        SDL_Window *sdl_window;
        SDL_Renderer *sdl_renderer;

        const std::size_t screen_width;
        const std::size_t screen_height;
        const std::size_t grid_width;
        const std::size_t grid_height;

};

#endif