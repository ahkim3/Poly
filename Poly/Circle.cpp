#include "Circle.h"
#include <iostream>
#include <math.h>


Circle::Circle(unsigned const int radiusInput)
{
	const double pi = 3.14159265358979323846; // Defines pi

	// Circle properties
	radius = radiusInput;
	area = pi * pow(radius, 2);
}


Circle::~Circle()
{
}


void Circle::draw(sf::RenderWindow& window)
{
	std::cout << "This will draw a circle.\n\n";

	sf::CircleShape shape(radius);
	window.draw(shape);
}
