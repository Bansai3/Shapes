#include "Rectangle.h"

Rectangle::Rectangle(Point point, double width, double height): width(width), height(height), Shape(point)
{

}

float Rectangle::Perimeter()
{
    return 2*(width + height);
}

float Rectangle::Square()
{
    return width * height;
}

std::ostream& operator<< (std::ostream& out, const Rectangle& r)
{
    out << "Rectangle " << "[" << r.point.x << ", " << r.point.y << "]" << "(" << r.width << ", " << r.height << ")";
    return out;
}
