#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "global.h"
#include "drawable2d.h"

namespace ocgs {
	class Rectangle : Drawable2D {
	private:
		unsigned int _vao, _vbo, _ebo;
	public:
		Rectangle(int w, int h);
		void Draw() override;
	};
}

#endif