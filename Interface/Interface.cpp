#include "Interface.h"
#include "Rectangle.h"
#include "Triangle.h"

int main()
{
	Rectangle rect;
	Triangle tri;

	rect.setWidth(5);
	rect.setHeight(7);

	//print the area of the object
	std::cout << "Total Rectangle area: " << rect.getArea() << std::endl;

	tri.setWidth(5);
	tri.setHeight(7);

	//print the area of the object
	std::cout << "Total Triangle area: " << tri.getArea() << std::endl;

	system("pause");
	return 0;
}
