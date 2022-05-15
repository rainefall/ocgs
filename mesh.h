#ifndef MESH_H
#define MESH_H

#include "global.h"

#include <vector>

#include <assimp/scene.h>
#include <assimp/Importer.hpp>

namespace ocgs {
	struct Vertex {
		float Position[3];
		float Normal[3];
		float UV[2];
		float Color[4];
	};

	class Mesh {
	private:
		unsigned int _vao, _vbo, _ebo;
		bool _backfaceCulling;

		std::vector<Vertex> _vertices;
		std::vector<unsigned int> _indices;

	public:
		// create new empty mesh
		Mesh();
		// draw mesh to active render layer
		void Draw();
		// create mesh from imported aiMesh object
		static Mesh FromAiMesh(aiMesh* mesh, const aiScene* scene);
	};
}

#endif