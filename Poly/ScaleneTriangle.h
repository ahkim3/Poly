#pragma once
#include "Triangle.h"
#include <SFML/Graphics.hpp>


class ScaleneTriangle :
    public Triangle
{
public:
    ScaleneTriangle(unsigned const int);
    ~ScaleneTriangle();

    void draw(sf::RenderWindow&);

private:
    unsigned int length;
    //sf::ConvexShape shape;
};

