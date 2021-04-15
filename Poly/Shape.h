#pragma once


class Shape
{
public:
	Shape();
	~Shape();

	virtual void draw() = 0;

protected:
	unsigned int xPos, yPos;
};

