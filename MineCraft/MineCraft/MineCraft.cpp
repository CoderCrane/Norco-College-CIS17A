#include "pch.h"
#include <iostream>
#include "Block.h"
#include "GrassBlock.h"

int main()
{
	Block b;
	b.setX(15);
	b.setY(20);
	b.setZ(25);
	std::cout << b.getX() << "," << b.getY() << "," << b.getZ() << std::endl;

	GrassBlock gb;
	gb.setX(15);
	gb.setY(20);
	gb.setZ(25);
	std::cout << gb.getX() << "," << gb.getY() << "," << gb.getZ() << std::endl;
}
