#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
	double radius;
	cin >> radius;
	cout << "Perimeter: " << getCirclePerimeter(radius) << endl << "Area: " << getCircleArea(radius) << endl;
	return 0;
}
