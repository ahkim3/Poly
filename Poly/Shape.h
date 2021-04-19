#pragma once
#include <SFML/Graphics.hpp>


class Shape
{
public:
	Shape();
	~Shape();

	virtual void draw(sf::RenderWindow&) = 0;

	int newColor();

protected:
	unsigned int xPos, yPos;
};

