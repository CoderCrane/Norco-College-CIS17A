#include "pch.h"
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
	double height;
	double width;
public:
	double getHeight();
	void setHeight(double newHeight);

	double getWidth();
	void setWidth(double newWidth);

};
#endif