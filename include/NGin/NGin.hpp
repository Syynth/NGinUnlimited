/* 
 * File:   NGin.h
 * Author: Ben Cochrane
 *
 * Created on December 14, 2012, 11:36 AM
 */

#pragma once

namespace NGin {
    class Window;
    class ResourceManager;
    class Resource;
    class Graphics;
    class Texture;
    class Scene;
    class GameFactory;
    class Game;
    class GameLevel;
    class GameObject;
    class Image;
    class Vector2;
    class Input;
    
    bool Init();
    int Execute();
    void Quit();
}

#include "NGin/Vector2.hpp"
#include "NGin/Resource.hpp"
#include "NGin/Texture.hpp"
#include "NGin/Image.hpp"
#include "NGin/Scene.hpp"
#include "NGin/Graphics.hpp"
#include "NGin/ResourceManager.hpp"
#include "NGin/Window.hpp"
#include "NGin/GameObject.hpp"
#include "NGin/GameLevel.hpp"
#include "NGin/Game.hpp"
#include "NGin/GameFactory.hpp"
#include "NGin/Input.hpp"