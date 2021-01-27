#ifndef GRASS_BLOCK_H
#define GRASS_BLOCK_H
#include "Block.h"

class GrassBlock : public Block {
public:
	int getVolume() {
		return this->x * this->y * this->z;
	}

	int getTexture() {
		return 5;
	}

	GrassBlock() {
		std::cout << "Fired GrassBlock Constructor" << std::endl;
	}
	~GrassBlock() {
		std::cout << "Fired GrassBlock destructor" << std::endl;
	}
};

#endif
