/* 
 * File:   NGinGraphics.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 14, 2012, 11:12 AM
 */

#include "NGin/Graphics.h"

using namespace NGin;

NGin::Graphics *NGin::Graphics::m_graphics = 0;

Graphics::Graphics() {
    Graphics::m_graphics = this;
}

Graphics::Graphics(const Graphics& orig) {
}

Graphics::~Graphics() {
}

void Graphics::drawImage(std::string name, int x, int y) {
    SDL_Surface *img = (SDL_Surface*)(38856816);//ResourceManager::Get()->getImage(name);
    SDL_Rect offset;
    offset.x = x;
    offset.y = y;
    SDL_BlitSurface(img, NULL, Window::Get()->getScreen(), &offset);
}