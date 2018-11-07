#include "draw_shape.h"
#include <iostream>

using namespace std;

void makeCanvas(char**& lst, int width, int height) {
	lst = new char*[height];
	for (int i = 0; i < height; ++i) lst[i] = new char[width];

	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < width; ++j) lst[i][j] = '.';
	}
}

void printCanvas(char**& lst, int width, int height) {
	cout << " ";
	for (int i = 0; i < width; ++i) cout << i;
	cout << endl;

	for (int i = 0; i < height; ++i) {
		cout << i;
		for (int j = 0; j < width; ++j) cout << lst[i][j];
		cout << endl;
	}
}

void delCanvas(char**& lst, int height) {
	for (int i = 0; i < height; ++i) delete[] lst[i];
	delete[] lst;
}

Shape::Shape() {
	_width = 0, _height = 0, _area = 0, _perimeter = 0, _xpos = 0, _ypos = 0, _brush = '.';
}

Shape::Shape(int xpos, int ypos, int height, int width, char brush) {
	_xpos = xpos, _ypos = ypos, _width = width, _height = height, _brush = brush, _area = 0, _perimeter = 0;
}

double Shape::GetArea() {
	return _area;
}

int Shape::GetPerimeter() {
	return _perimeter;
}

void Shape::Draw(int canvas_width, int canvas_height) {};

Square::Square() {};

Square::Square(int xpos, int ypos, int width, char brush) : Shape(xpos, ypos, width, width, brush) {
	_area = _width * _height;
	_perimeter = 4 * _width;
}

void Square::Draw(int canvas_width, int canvas_height) {
	makeCanvas(canvas, canvas_width, canvas_height);

	for(int i = _ypos; i < _ypos + _height; ++i) {
		if (i >= canvas_height) continue;
		for (int j = _xpos; j < _xpos + _width; ++j) {
			if (j >= canvas_width) continue;
			canvas[i][j] = _brush;
		}
	}

	printCanvas(canvas, canvas_width, canvas_height);
	delCanvas(canvas, canvas_height);
}

Rectangle::Rectangle() {}

Rectangle::Rectangle(int xpos, int ypos, int height, int width, char brush) : Shape(xpos, ypos, height, width, brush) {
	_area = _width * _height;
	_perimeter = 2 * (_width + _height);
}

void Rectangle::Draw(int canvas_width, int canvas_height) {
	makeCanvas(canvas, canvas_width, canvas_height);

	for (int i = _ypos; i < _ypos + _height; ++i) {
		if (i >= canvas_height) continue;
		for (int j = _xpos; j < _xpos + _width; ++j) {
			if (j >= canvas_width) continue;
			canvas[i][j] = _brush;
		}
	}

	printCanvas(canvas, canvas_width, canvas_height);
	delCanvas(canvas, canvas_height);
}

Diamond::Diamond() {}

Diamond::Diamond(int xpos, int ypos, int width, char brush) : Shape(xpos, ypos, width, width, brush) {
	_area = _width * _height * 2;
	_perimeter = 4 * (_width + _height);
}

void Diamond::Draw(int canvas_width, int canvas_height) {
	makeCanvas(canvas, canvas_width, canvas_height);

	int tmp = 0;
	for (int i = _ypos; i < _ypos + _height; ++i, ++tmp) {
		if (i >= canvas_height) continue;
		for (int j = _xpos - tmp; j <= _xpos + tmp; ++j) {
			if (j >= canvas_width || j < 0) continue;
			canvas[i][j] = _brush;
		}
	}
	for (int i = _ypos + tmp; tmp >= 0; ++i, --tmp) {
		if (i >= canvas_height) continue;
		for (int j = _xpos - tmp; j <= _xpos + tmp; ++j) {
			if (j >= canvas_width || j < 0) continue;
			canvas[i][j] = _brush;
		}
	}

	printCanvas(canvas, canvas_width, canvas_height);
	delCanvas(canvas, canvas_height);
}
