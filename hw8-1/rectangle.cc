#include <iostream>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(int height, int width) {
	_width = width;
	_height = height;
}

int Rectangle::getWidth() const { return _width; }

int Rectangle::getHeight() const { return _height; }

int Rectangle::getArea() const { return _width * _height; }

int Rectangle::getPerimeter() const { return (_width + _height) * 2; }


Square::Square(int width) : Rectangle(width, width) {}

void Square::print() const {
	cout << getWidth() << "x" << getWidth() << " Square" << endl
	     << "Area: " << getArea() << endl
	     << "Perimeter: " << getPerimeter() << endl;
}


NonSquare::NonSquare(int height, int width) : Rectangle(height, width) {}

void NonSquare::print() const {
	cout << getHeight() << "x" << getWidth() << " NonSquare" << endl
	     << "Area: " << getArea() << endl
	     << "Perimeter: " << getPerimeter() << endl;
}
