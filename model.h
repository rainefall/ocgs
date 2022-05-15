#ifndef MODEL_H
#define MODEL_H

#include "global.h"

#include <assimp/scene.h>
#include <assimp/Importer.hpp>

namespace ocgs {
	// notify our "friend" the compiler that there is indeed a class called Mesh
	class Mesh;

	class Model {
	private:
		void _processNode(aiNode* node, const aiScene* scene);
	public:
		Model(const char* path);
	};
}

#endif