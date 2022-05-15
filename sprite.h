#ifndef SPRITE_H
#define SPRITE_H

#include "global.h"
#include "rectangle.h"

namespace ocgs {
	// A rectangle with a texture
	class Sprite : Rectangle {
	private:
		Sprite(int w, int h);
	public:
		static Sprite FromTexture();
	};
}

#endif