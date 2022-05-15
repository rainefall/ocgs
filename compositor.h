#ifndef COMPOSITOR_H
#define COMPOSITOR_H

#include "global.h"
#include "renderlayer.h"
#include <vector>

namespace ocgs {
	class Compositor {
	private:
		std::vector<RenderLayer*> _renderLayers;
	public:
		Compositor();
	};
}

#endif