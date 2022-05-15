#ifndef DRAWABLE2D_H
#define DRAWABLE2D_H

#include "global.h"
#include "2d.h"

namespace ocgs {
	// instancing this class is a bad idea so don't do it
	class Drawable2D {
	public:
		virtual void Draw() = 0;
	};
}

#endif