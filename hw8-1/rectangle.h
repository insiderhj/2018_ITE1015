#ifndef __RECTANGLE__
#define __RECTANGLE__

class Rectangle {
	int _width, _height;
public:
	Rectangle(int, int);
	int getWidth() const;
	int getHeight() const;
	int getArea() const;
	int getPerimeter() const;
};

class Square : public Rectangle {
public:
	Square(int);
	void print() const;
};

class NonSquare : public Rectangle {
public:
	NonSquare(int, int);
	void print() const;
};

#endif
