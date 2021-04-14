#pragma once


class Shape
{
public:
	Shape();
	~Shape();

	virtual void draw() = 0;

protected:
	double area;
	unsigned int xPos, yPos;
};

