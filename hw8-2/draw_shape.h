#ifndef __DRAW_SHAPE__
#define __DRAW_SHAPE__

class Shape {
protected:
	int _xpos, _ypos, _width, _height, _perimeter;
	double _area;
	char _brush;
	char** canvas;
public:
	Shape();
	Shape(int, int, int, int, char);
	double GetArea();
	int GetPerimeter();
	void Draw(int, int);
};

class Square : public Shape {
public:
	Square();
	Square(int, int, int, char);
	void Draw(int, int);
};

class Rectangle : public Shape {
public:
	Rectangle();
	Rectangle(int, int, int, int, char);
	void Draw(int, int);
};

class Diamond : public Shape {
public:
	Diamond();
	Diamond(int, int, int, char);
	void Draw(int, int);
};

#endif
