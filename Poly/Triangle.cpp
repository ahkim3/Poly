#include "Triangle.h"
#include <math.h>


Triangle::Triangle()
{
	// Triangle properties; default to equilateral with lengths 1
	sideOne = 1;
	sideTwo = sideOne;
	sideThree = sideOne;
	area = (sqrt(3) * pow(sideOne, 2)) / 4; // Calculate area

	shape.setPointCount(3);
}


Triangle::~Triangle()
{
}
