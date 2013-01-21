/* 
 * File:   Graphics.cpp
 * Author: Ben Cochrane
 * 
 * Created on December 14, 2012, 11:12 AM
 */

#include "NGin/NGin.hpp"

using namespace NGin;
using namespace NGin::Resource;
using namespace NGin::Math;

RenderContext::RenderContext(Window *window) {
    wind = window;
    offset = new Vector2(0, 0);
}

RenderContext::RenderContext(const RenderContext& orig) {
}

RenderContext::~RenderContext() {
}

void RenderContext::Clear() {
    SDL_FillRect(wind->GetScreen(), &(wind->GetScreen()->clip_rect), SDL_MapRGB(wind->GetScreen()->format, 0x0, 0x0, 0x0));
}

void RenderContext::Clear(int r, int g, int b) {
    SDL_FillRect(wind->GetScreen(), &wind->GetScreen()->clip_rect, SDL_MapRGB(wind->GetScreen()->format, r, g, b));
}

void RenderContext::DrawTexture(Texture* texture, Vector2* pos) {
    SDL_Rect offset;
    offset.x = pos->x;
    offset.y = pos->y;
    SDL_BlitSurface(texture->surface(), NULL, wind->GetScreen(), &offset);
}

void RenderContext::DrawTexture(Texture* texture, Vector2* pos, Vector2* clipPos, Vector2* clipSize) {
    SDL_Rect offset, clip;
    offset.x = pos->x;
    offset.y = pos->y;
    clip.x = clipPos->x;
    clip.y = clipPos->y;
    clip.w = clipSize->x;
    clip.h = clipSize->y;
    SDL_BlitSurface(texture->surface(), &clip, wind->GetScreen(), &offset);
}

void RenderContext::Finalize() {
    SDL_Flip(wind->GetScreen());
}