#pragma once
#include "TwoDimension.h"
#include <SFML/Graphics.hpp>


class Circle :
    public TwoDimension
{
public:
    Circle(unsigned const int);
    ~Circle();

    void draw(sf::RenderWindow&);

private:
    unsigned int radius;
    sf::CircleShape shape;
};

