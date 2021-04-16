#pragma once
#include "TwoDimension.h"
#include <SFML/Graphics.hpp>


class Triangle :
    public TwoDimension
{
public:
    Triangle(unsigned const int, unsigned const int);
    ~Triangle();

    void draw(sf::RenderWindow&);

private:
    int base, height;
};

