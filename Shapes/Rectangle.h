#ifndef SHAPES_RECTANGLE_H
#define SHAPES_RECTANGLE_H

#include "Shape.h"

class Rectangle :
    public Shape 
{
protected:
    double width;
    double height;
public:
    Rectangle(Point point, double width, double height);
    virtual float Perimeter() override;
    virtual float Square() override;
    friend std::ostream& operator<< (std::ostream& out, const Rectangle& r);
};

#endif