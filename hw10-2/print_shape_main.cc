#include "print_shape.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string shape;
	vector<Shape*> shapes;
	while (true) {
		cin >> shape;
		if (shape == "0") break;
		if (shape == "c") {
			double radius;
			cin >> radius;
			shapes.push_back(new Circle(radius));
		} else if (shape == "r") {
			double width, height;
			cin >> width >> height;
			shapes.push_back(new Rectangle(width, height));
		}
	}

	for (auto shape : shapes) {
		cout << shape->getTypeString() << ", " << shape->getArea() << ", " << shape->getPerimeter() << endl;
		delete shape;
	}
	
	return 0;
}
