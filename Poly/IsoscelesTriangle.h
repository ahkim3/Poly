#pragma once
#include "Triangle.h"
#include <SFML/Graphics.hpp>


class IsoscelesTriangle :
    public Triangle
{
public:
    IsoscelesTriangle(unsigned const int, unsigned const int);
    ~IsoscelesTriangle();

    void draw(sf::RenderWindow&);

private:
    unsigned int base, height;
};

