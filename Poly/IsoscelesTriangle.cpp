#include "IsoscelesTriangle.h"
#include <math.h>


IsoscelesTriangle::IsoscelesTriangle(unsigned const int baseInput,
	unsigned const int heightInput)
{
	// Triangle properties
	base = baseInput;
	height = heightInput;

	sideOne = base;
	sideTwo = sqrt(pow((base / 2), 2) + pow(base, 2));
	sideThree = sideTwo;

	area = (base * height) / 2; // Calculate area

	// Create triangle
	shape.setPointCount(3);
	shape.setPoint(0, sf::Vector2f(base / 2, 0));
	shape.setPoint(1, sf::Vector2f(0, height));
	shape.setPoint(2, sf::Vector2f(base, height));
}


IsoscelesTriangle::~IsoscelesTriangle()
{
}


void IsoscelesTriangle::draw(sf::RenderWindow& window)
{
	// Randomize position and color
	shape.setPosition(sf::Vector2f((rand() % (601 - (base))),
		(rand() % (601 - (height)))));
	shape.setFillColor(sf::Color(newColor(), newColor(), newColor()));

	window.draw(shape);
}
