#pragma once
#include "TwoDimension.h"
#include <SFML/Graphics.hpp>


class Triangle :
    public TwoDimension
{
public:
    Triangle();
    ~Triangle();

protected:
    unsigned int sideOne, sideTwo, sideThree;
    sf::ConvexShape shape;
};

