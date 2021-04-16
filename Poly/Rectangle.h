#pragma once
#include "TwoDimension.h"
#include <SFML/Graphics.hpp>


class Rectangle :
    public TwoDimension
{
public:
    Rectangle(const double, const double);
    ~Rectangle();

    void draw(sf::RenderWindow&);
    
private:
    double base, height;
};

