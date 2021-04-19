#include "Shape.h"


Shape::Shape()
{
	xPos = 1, yPos = 1; // Default to position (1, 1)
}


Shape::~Shape()
{
}


// Returns an int to be used as an R, G, or B color value for a side of a shape
int Shape::newColor()
{
	return (rand() % 256);
}
