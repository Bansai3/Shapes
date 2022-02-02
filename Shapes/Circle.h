#pragma once
#include"Shape.h"

class Circle : public Shape 
{
	double radius;
public:
	Circle(Point point, double radius);


	virtual float Perimeter() override;

	virtual float Square() override;

	friend std::ostream& operator<< (std::ostream& out, const Circle& c);

};

