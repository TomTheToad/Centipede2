#include "render_controller.h"
#include <iostream>
#include <string>

Render_Controller::Render_Controller(
    const std::size_t screen_width,
    const std::size_t screen_height,
    const std::size_t grid_width, 
    const std::size_t grid_height)
    : screen_width(screen_width),
      screen_height(screen_height),
      grid_width(grid_width),
      grid_height(grid_height) {
        
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize.\n";
        std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
    }

    // Create Window
    sdl_window = SDL_CreateWindow(
        "Centipede",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, 
        screen_width,
        screen_height, 
        SDL_WINDOW_SHOWN);

    if (nullptr == sdl_window) {
        std::cerr << "Window could not be created.\n";
        std::cerr << " SDL_Error: " << SDL_GetError() << "\n";
    }

    // Create renderer
    sdl_renderer = SDL_CreateRenderer(sdl_window, -1, SDL_RENDERER_ACCELERATED);
    if (nullptr == sdl_renderer) {
        std::cerr << "Renderer could not be created.\n";
        std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
    }
}

void Render_Controller::Render() {
    // Intiate block, extrapolate dimensions
    SDL_Rect block;
    block.w = screen_width / grid_width;
    block.h = screen_height / grid_height;

    // Clear the screen
    SDL_SetRenderDrawColor(sdl_renderer, 0x1E, 0x1E, 0x1E, 0xFF);
    SDL_RenderClear(sdl_renderer);

    // this is not used now but putting in for testing
    // Update Screen
    SDL_RenderPresent(sdl_renderer);

    // TODO: test log << remove when done
    std::cout << "Running Render";
}

Render_Controller::~Render_Controller() {
    SDL_DestroyWindow(sdl_window);
    SDL_Quit();
}

