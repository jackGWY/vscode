#include<iostream>
#include "PaintCost.h"
#include "Rectangle.h"
#include "Shape.h"

using namespace std;

int main(void)
{
	Rectangle Rect;
	int area;
	
	Rect.setWidth(5);
	Rect.setHeight(7);

	area = Rect.getArea();
	cout << "totle area:" << Rect.getArea() << endl;
	cout << "totle paintcost" << Rect.getCost(area) << endl;
	return 0;
}