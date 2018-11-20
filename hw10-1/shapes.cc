#include "shapes.h"

double Triangle::getArea() {
	return _width * _height / 2;
}

double Rectangle::getArea() {
	return _width * _height;
}
