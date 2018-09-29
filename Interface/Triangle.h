#pragma once
#include "Shape.h"

//Derived from class Shape.
class Triangle: public Shape
{
public:
	int getArea() override
	{
		return (width * height) / 2;
	}
};
