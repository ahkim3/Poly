#include "ScaleneTriangle.h"
#include <math.h>


ScaleneTriangle::ScaleneTriangle(unsigned const int lengthInput)
{
	// Triangle properties
	length = lengthInput;
	area = (sqrt(3) * pow(length, 2)) / 4;

	shape.setPointCount(3);
	shape.setPoint(0, sf::Vector2f(length / 2, 0));
	shape.setPoint(1, sf::Vector2f(0, length));
	shape.setPoint(2, sf::Vector2f(length, length));
}


ScaleneTriangle::~ScaleneTriangle()
{
}


void ScaleneTriangle::draw(sf::RenderWindow& window)
{
	// Randomize position and color
	shape.setPosition(sf::Vector2f((rand() % (601 - (length))),
		(rand() % (601 - (length)))));
	shape.setFillColor(sf::Color(newColor(), newColor(), newColor()));

	window.draw(shape);
}
