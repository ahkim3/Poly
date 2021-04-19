#pragma once
#include "TwoDimension.h"
#include <SFML/Graphics.hpp>


class Rectangle :
    public TwoDimension
{
public:
    Rectangle(unsigned const int, unsigned const int);
    ~Rectangle();

    void draw(sf::RenderWindow&);
    
private:
    unsigned int base, height;
    sf::RectangleShape shape;
};

