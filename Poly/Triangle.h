#pragma once
#include "TwoDimension.h"


class Triangle :
    public TwoDimension
{
public:
    Triangle(unsigned int, unsigned int);
    ~Triangle();

    void draw();

private:
    int base, height;
};

