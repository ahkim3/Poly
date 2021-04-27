#include "ScaleneTriangle.h"
#include <math.h>


ScaleneTriangle::ScaleneTriangle(float sideOneInput, 
	float sideTwoInput, float sideThreeInput)
{
	float perimeter, semiperimeter, innerBase;

	// Triangle properties
	sideOne = sideOneInput;
	sideTwo = sideTwoInput;
	sideThree = sideThreeInput;
	
	perimeter = sideOne + sideTwo + sideThree;
	semiperimeter = perimeter / 2;

	// Calculate area using Heron's formula
	area = sqrt(semiperimeter * (semiperimeter - sideOne) * 
		(semiperimeter - sideTwo) * (semiperimeter - sideThree));

	base = sideOne;
	height = (2 * area) / base; // Calculate height

	// Find distance between base/sideOne intersection and base/height
	// intersection
	innerBase = sqrt(pow(sideOne, 2) - pow(height, 2));

	shape.setPointCount(3);
	shape.setPoint(0, sf::Vector2f(innerBase, 0));
	shape.setPoint(1, sf::Vector2f(0, height));
	shape.setPoint(2, sf::Vector2f(base, height));
}


ScaleneTriangle::~ScaleneTriangle()
{
}


void ScaleneTriangle::draw(sf::RenderWindow& window)
{
	// Randomize position and color
	shape.setPosition(sf::Vector2f((rand() % (601 - base)),
		(rand() % (601 - height))));
	shape.setFillColor(sf::Color(newColor(), newColor(), newColor()));

	window.draw(shape);
}
