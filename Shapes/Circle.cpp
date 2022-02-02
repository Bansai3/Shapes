#include "Circle.h"

Circle::Circle(Point point, double radius) : Shape(point), radius(radius)
{
	
}

float Circle::Perimeter()
{
	return 2 * M_PI * radius;
}

float Circle::Square()
{
	return M_PI * radius * radius;
}

std::ostream& operator<< (std::ostream& out, const Circle& c)
{
	out << "Circle " << "[" << c.point.x << ", " << c.point.y << "]" << "(" << c.radius << ")";
	return out;
}