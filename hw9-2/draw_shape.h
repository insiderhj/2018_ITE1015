#pragma once
#include <vector>
#include <cstddef>
#include <iostream>

class Canvas {
	char** canvas;
	size_t _row, _col;
public:
	Canvas(const size_t, const size_t);
	~Canvas();
	void Resize(const size_t, const size_t);
	bool DrawPixel(const int, const int, const char);
	void Print() const;
	void Clear();
};

class Shape {
protected:
	int x, y, width, height;
	char brush;
public:
	Shape(int _x, int _y, int _width, int _height, char _brush) : x(_x), y(_y), width(_width), height(_height), brush(_brush) {}
	virtual void Draw(Canvas* canvas) const {}
	virtual void printInfo() const {}
};

class Rectangle : public Shape {
public:
	Rectangle(int _x, int _y, int _height, int _width, char _brush) : Shape(_x, _y, _width, _height, _brush) {}
	void Draw(Canvas*) const;
	void printInfo() const { std::cout << "rect " << x << " "<< y << " "<< height << " " << width << " " << brush << std::endl; }
};

class UpTriangle : public Shape {
public:
	UpTriangle(int _x, int _y, int _height, char _brush) : Shape(_x, _y, _height * 2 - 1, _height, _brush) {}
	void Draw(Canvas*) const;
	void printInfo() const { std::cout << "tri_up " << x << " " << y << " " << height << " " << brush << std::endl; }
};

class DownTriangle : public Shape {
public:
	DownTriangle(int _x, int _y, int _height, char _brush) : Shape(_x, _y, _height * 2 - 1, _height, _brush) {}
	void Draw(Canvas*) const;
	void printInfo() const { std::cout << "tri_down " << x << " " << y << " " << height << " " << brush << std::endl; }
};

class Diamond : public Shape {
public:
	Diamond(int _x, int _y, int _dist, char _brush) : Shape(_x, _y, _dist, _dist, _brush) {}
	void Draw(Canvas*) const;
	void printInfo() const { std::cout << "diamond " << x << " " << y << " "  << height << " " << brush << std::endl; }
};
