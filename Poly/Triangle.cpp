#include "Triangle.h"
#include <iostream>
#include <math.h>


Triangle::Triangle(unsigned const int radiusInput)
{
	// Triangle properties (area based on triangle inscribed inside a circle)
	radius = radiusInput;
	area = (3 * sqrt(3) * pow(radius, 2)) / 4;
	
	shape.setPointCount(3);
	shape.setRadius(radius);
}


Triangle::~Triangle()
{
}


void Triangle::draw(sf::RenderWindow& window)
{
	std::cout << "This will draw a triangle.\n\n";

	window.draw(shape);
}
