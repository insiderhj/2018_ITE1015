#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape {
protected:
	double _width, _height;
public:
	Shape(double width, double height) : _width(width), _height(height) {}
	virtual double getArea() = 0;
};

class Triangle : public Shape {
public:
	Triangle(double width, double height) : Shape(width, height) {}
	double getArea();
};

class Rectangle : public Shape {
public:
	Rectangle(double width, double height) : Shape(width, height) {}
	double getArea();
};

#endif
