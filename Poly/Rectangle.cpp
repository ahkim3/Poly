#include "Rectangle.h"


Rectangle::Rectangle(unsigned const int baseInput, 
	unsigned const int heightInput)
{
	// Rectangle properties
	base = baseInput;
	height = heightInput;
	area = (double) base * (double) height;

	shape.setSize(sf::Vector2f(base, height));
}


Rectangle::~Rectangle()
{
}


void Rectangle::draw(sf::RenderWindow& window)
{
	shape.setPosition(sf::Vector2f((rand() % (601 - base)), 
		(rand() % (601 - height))));
	shape.setFillColor(sf::Color(newColor(), newColor(), newColor()));

	window.draw(shape);
}