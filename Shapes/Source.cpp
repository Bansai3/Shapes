#include<vector>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include"Circle.h"
#include"Rectangle.h"
#include"Square.h"
#include"Shapes.h"
int main()
{
	Circle* c = new Circle({1, 2}, 3.56);
	Rectangle rec({ 2, 3 }, 3.6, 3.6);
	Square sqr({ 3, 4 }, 3.6);
	Shapes shapes;
	shapes.addShape(c);
	shapes.addShape(&rec);
	shapes.addShape(&sqr);
	std::cout << shapes << std::endl;
	return 0;
}