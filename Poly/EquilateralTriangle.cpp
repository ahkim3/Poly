#include "EquilateralTriangle.h"
#include <math.h>


EquilateralTriangle::EquilateralTriangle(unsigned const int lengthInput)
{
	// Triangle properties
	length = lengthInput;

	sideOne = length;
	sideTwo = length;
	sideThree = length;

	area = (sqrt(3) * pow(length, 2)) / 4; // Calculate area

	// Create triangle
	shape.setPoint(0, sf::Vector2f(length / 2, 0));
	shape.setPoint(1, sf::Vector2f(0, length));
	shape.setPoint(2, sf::Vector2f(length, length));
}


EquilateralTriangle::~EquilateralTriangle()
{
}


void EquilateralTriangle::draw(sf::RenderWindow& window)
{
	// Randomize position and color
	shape.setPosition(sf::Vector2f((rand() % (601 - (length))),
		(rand() % (601 - (length)))));
	shape.setFillColor(sf::Color(newColor(), newColor(), newColor()));

	window.draw(shape);
}
