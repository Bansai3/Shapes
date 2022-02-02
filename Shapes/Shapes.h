#pragma once
#include<vector>
#include"Shape.h"
class Shapes
{
	std::vector<Shape*> shapes;
	static bool squareCmp(Shape* s1, Shape* s2);
public:
	void addShape(Shape* shape);
	void sortBySquare();
	friend std::ostream& operator<< (std::ostream& out,const Shapes& shapes);
};

