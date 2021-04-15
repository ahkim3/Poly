#pragma once
#include "TwoDimension.h"


class Circle :
    public TwoDimension
{
public:
    Circle(unsigned int);
    ~Circle();

    void draw();

private:
    unsigned int radius;
};

