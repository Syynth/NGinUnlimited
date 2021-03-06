/* 
 * File:   TiledTile.cpp
 * Author: Ben Cochrane
 * 
 * Created on January 15, 2013, 4:43 PM
 */

#include "NGin/NGin.hpp"

using namespace NGin;
using namespace NGin::Game;
using namespace NGin::Resource;
using namespace NGin::Math;
using namespace std;

Tile::Tile(Level *gl, string texID, Vector2 *position, Vector2* clipPos, Vector2* clipSize) : Object(gl) {
    mPos = position;
    mGraphic = GameFactory::CreateImage(texID, *clipPos, *clipSize);
}

Tile::~Tile() { }

void Tile::Update() { }

void Tile::Render() {
    mGraphic->Render(*mPos);
}

Mask* Tile::GetMask() {
    return NULL;
}