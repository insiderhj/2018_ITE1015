#include <iostream>
#include "simple_shape.h"

using namespace std;

int main()
{
	char shape;
	int a, b, c, d;

	while (true) {
		cout << "shape?" << endl;
		cin >> shape;

		if (shape == 'C') {
			cin >> a >> b >> c;

			Circle circle = Circle(a, b, c);
			cout << "area: " << circle.get_area() << ", perimeter: " << circle.get_perimeter() << endl;
		} else if (shape == 'R') {
			cin >> a >> b >> c >> d;

			Rectangle rectangle = Rectangle(a, b, c, d);
			cout << "area: " << rectangle.get_area() << ", perimeter: " << rectangle.get_perimeter() << endl;
		} else return -1;
	}
	return 0;
}
