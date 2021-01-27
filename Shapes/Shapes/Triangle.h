#include "pch.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
	double base;
	double height;
public:
	double getBase();
	void getBase(double newBase);

	double getHeight();
	void getHeight(double newHeight);
};
#endif