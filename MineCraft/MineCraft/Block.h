#ifndef BLOCK_H
#define BLOCK_H

class Block {
protected:
	int x;
	int y;
	int z;

private:


public:
	Block() {
		std::cout << "Fired block constructor" << std::endl;
	}
	~Block() {
		std::cout << "Fired block destructor" << std::endl;
	}

	int getTexture() {
		return -1;
	}

	int getX() { return this->x; }
	int getY() { return this->y; }
	int getZ() { return this->z; }

	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }
	void setZ(int z) { this->z = z; }
};

#endif