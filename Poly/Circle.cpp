#include "Circle.h"
#include <iostream>
#include <math.h>


Circle::Circle(unsigned int radiusInput)
{
	const double pi = 3.14159265358979323846; // Defines pi

	// Circle properties
	radius = radiusInput;
	area = pi * pow(radius, 2);


}


Circle::~Circle()
{
}


void Circle::draw()
{
}
