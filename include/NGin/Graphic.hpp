/* 
 * File:   Graphic.hpp
 * Author: Ben Cochrane
 *
 * Created on January 21, 2013, 8:51 AM
 */

#pragma once

#include "NGin/NGin.hpp"

namespace NGin {

    namespace Game {
    
        class Graphic {
        public:
            Graphic();
            Graphic(const Graphic& orig);
            virtual ~Graphic();
            virtual void Update();
            virtual void Render(const Math::Vector2 &position);
        private:
            RenderContext *mRender;
        };
    
    };

};