#define SDL_MAIN_HANDLED
#include "SDL.h"

int main() {
	SDL_Init(SDL_INIT_VIDEO);
	SDL_Window* window = SDL_CreateWindow("test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);

	SDL_Delay(9000);
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
	

}

