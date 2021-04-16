#include "Triangle.h"
#include <iostream>


Triangle::Triangle(unsigned const int baseInput, unsigned const int heightInput)
{
	// Triangle properties
	base = baseInput;
	height = heightInput;
	area = (base * height) / 2;
}


Triangle::~Triangle()
{
}


void Triangle::draw(sf::RenderWindow& window)
{
	std::cout << "This will draw a triangle.\n\n";
}
