#include "Triangle.h"


Triangle::Triangle(unsigned int baseInput, unsigned int heightInput)
{
	// Triangle properties
	base = baseInput;
	height = heightInput;
	area = (base * height) / 2;
}


Triangle::~Triangle()
{
}


void Triangle::draw()
{
}
