#ifndef __PRINT_SHAPE_H__
#define __PRINT_SHAPE_H__

#include <string>
#define Pi 3.141592

class Shape {
public:
	Shape() {}
	virtual double getArea() = 0;
	virtual double getPerimeter() = 0;
	virtual std::string getTypeString() = 0;
};

class Circle : public Shape {
private:
	double _radius;
public:
	Circle(double radius) : _radius(radius) {}
	double getArea();
	double getPerimeter();
	std::string getTypeString() { return "Circle"; }
};

class Rectangle : public Shape {
private:
	double _width, _height;
public:
	Rectangle(double width, double height) : _width(width), _height(height) {}
	double getArea();
	double getPerimeter();
	std::string getTypeString() { return "Rectangle"; }
};

#endif
