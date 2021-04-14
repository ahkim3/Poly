#pragma once
#include "Shape.h"


class Circle :
    public Shape
{
public:
    Circle(unsigned int);
    ~Circle();

    void draw();

private:
    unsigned int radius;
};

