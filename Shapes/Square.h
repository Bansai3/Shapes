#ifndef SHAPES_SQUARE_H
#define SHAPES_SQUARE_H

#include"Rectangle.h"
class Square : public Rectangle
{
public:
	Square(Point point, double size);
	friend std::ostream& operator<< (std::ostream& out, const Square& s);
};
#endif
