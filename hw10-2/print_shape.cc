#include "print_shape.h"
#include <string>

using namespace std;

double Circle::getArea() {
	return Pi * _radius * _radius;
}

double Circle::getPerimeter() {
	return Pi * _radius * 2;
}

double Rectangle::getArea() {
	return _width * _height;
}

double Rectangle::getPerimeter() {
	return (_width + _height) * 2;
}
