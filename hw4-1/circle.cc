#include "circle.h"

#define pi 3.141592

double getCirclePerimeter(double radius)
{
	return radius * 2 * pi;
}

double getCircleArea(double radius)
{
	return radius * radius * pi;
}
