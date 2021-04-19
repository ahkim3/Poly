#include "Circle.h"
#include <math.h>


Circle::Circle(unsigned const int radiusInput)
{
	const double pi = 3.14159265358979323846; // Defines pi

	// Circle properties
	radius = radiusInput;
	area = pi * pow(radius, 2);

	shape.setRadius(radius);
}


Circle::~Circle()
{
}


void Circle::draw(sf::RenderWindow& window)
{
	shape.setPosition(sf::Vector2f((rand() % (601 - (2 * radius))),
		(rand() % (601 - (2 * radius)))));
	shape.setFillColor(sf::Color(newColor(), newColor(), newColor()));

	window.draw(shape);
}
