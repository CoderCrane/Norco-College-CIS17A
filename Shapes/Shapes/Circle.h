//Inside of our header file we will create
//the class specification which is the data
//AND the function prototypes.
#include "pch.h"
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
	double radius;

public:
	double getRadius();
	void setRadius(double newRadius);
};

#endif