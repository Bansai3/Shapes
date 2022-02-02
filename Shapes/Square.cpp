#include "Square.h"

Square::Square(Point point, double size) : Rectangle(point, size, size)
{

}

std::ostream& operator<<(std::ostream& out, const Square& s)
{
	out << "Square " << "[" << s.point.x << ", " << s.point.y << "]" << "(" << s.height << ")";
	return out;
}
