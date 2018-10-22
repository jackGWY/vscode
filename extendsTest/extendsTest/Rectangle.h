#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
#include "PaintCost.h"
class Rectangle :public Shape, public PaintCost
{
public:
	int getArea();
};
#endif