#include "simple_shape.h"
#define pi 3.14

Circle::Circle(int a, int b, int c) {
	jungshim = new int[2];
	jungshim[0] = a; jungshim[1] = b;
	range = c;
}

double Circle::get_area() {
	return range * range * pi;
}

double Circle::get_perimeter() {
	return range * 2 * pi;
}

Circle::~Circle() {
	delete[] jungshim;
}


Rectangle::Rectangle(int a, int b, int c, int d) {
	pos1 = new int[2];
	pos1[0] = a; pos1[1] = b;
	pos2 = new int[2];
	pos2[0] = c; pos2[1] = d;
}

double Rectangle::get_area() {
	return (pos2[0] - pos1[0]) * (pos1[1] - pos2[1]);
}

double Rectangle::get_perimeter() {
	return (pos2[0] - pos1[0] + pos1[1] - pos2[1]) * 2;
}

Rectangle::~Rectangle() {
	delete[] pos1;
	delete[] pos2;
}

