#include "Rectangle.h"
#include <iostream>


Rectangle::Rectangle(const double baseInput, const double heightInput)
{
	// Rectangle properties
	base = baseInput;
	height = heightInput;
	area = base * height;
}


Rectangle::~Rectangle()
{
}


void Rectangle::draw(sf::RenderWindow& window)
{
	std::cout << "This will draw a rectangle.\n\n";

	sf::RectangleShape shape(sf::Vector2f(base, height));
	window.draw(shape);
}