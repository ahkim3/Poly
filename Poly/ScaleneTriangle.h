#pragma once
#include "Triangle.h"
#include <SFML/Graphics.hpp>


class ScaleneTriangle :
    public Triangle
{
public:
    ScaleneTriangle(float, float, float);
    ~ScaleneTriangle();

    void draw(sf::RenderWindow&);

private:
    unsigned int base, height;
};

