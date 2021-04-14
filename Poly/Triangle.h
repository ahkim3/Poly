#pragma once
#include "Shape.h"


class Triangle :
    public Shape
{
public:
    Triangle(unsigned int, unsigned int);
    ~Triangle();

    void draw();

private:
    int base, height;
};

