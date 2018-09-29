#pragma once
#include "Shape.h"

//Derived from class Shape.
class Rectangle: public Shape
{
public:
	int getArea() override
	{
		return (width * height);
	}
};
