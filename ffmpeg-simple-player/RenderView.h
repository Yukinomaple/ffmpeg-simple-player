#pragma once
#include <SDL.h>
#include <list>
#include <mutex>

struct RenderItem
{
	SDL_Texture * texture;
	SDL_Rect srcRect;
	SDL_Rect dstRect;
};

class RenderView
{ 

};

