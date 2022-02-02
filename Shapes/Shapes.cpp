#include "Shapes.h"
#include<algorithm>

bool Shapes::squareCmp(Shape* s1, Shape* s2)
{
	return s1->Square() > s2->Square();
}

void Shapes::addShape(Shape* shape)
{
	shapes.push_back(shape);
}

void Shapes::sortBySquare()
{
	std::sort(shapes.begin(), shapes.end(), squareCmp);
}

std::ostream& operator<<(std::ostream& out, const Shapes& shapes)
{
	for (int i = 0; i < shapes.shapes.size(); i++)
	{
		out << shapes.shapes[i] << std::endl;
	}
	return out;
}
