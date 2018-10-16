#ifndef _SIMPLE_SHAPE_
#define _SIMPLE_SHAPE_

class Circle {
private:
	int* jungshim;
	int range;

public:
	Circle(int, int, int);
	double get_area();
	double get_perimeter();
	~Circle();
};

class Rectangle {
private:
	int* pos1;
	int* pos2;

public:
	Rectangle(int, int, int, int);
	double get_area();
	double get_perimeter();
	~Rectangle();
};

#endif
