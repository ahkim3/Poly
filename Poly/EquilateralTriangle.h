#pragma once
#include "Triangle.h"
#include <SFML/Graphics.hpp>


class EquilateralTriangle :
    public Triangle
{
public:
    EquilateralTriangle(unsigned const int);
    ~EquilateralTriangle();

    void draw(sf::RenderWindow&);

private:
    unsigned int length;
};

