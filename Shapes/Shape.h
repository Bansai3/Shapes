#pragma once
#include"Point.h"
#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>

class Shape
{
protected:
	Point point;
public:
	Shape(Point point);
	virtual float Perimeter() = 0;
	virtual float Square() = 0;
};

