#pragma once
#include "Shape.h"


class TwoDimension :
    public Shape
{
public:
    TwoDimension();
    ~TwoDimension();

protected:
    double area;
};

