#ifndef __NUMBER__
#define __NUMBER__

class Number {
protected:
	int _num;
public:
	Number();
	Number(int);

	void setNumber(int);
	int getNumber();
};

class Square : public Number {
public:
	Square();
	Square(int);

	int getSquare();
};

class Cube : public Square {
public:
	Cube();
	Cube(int);

	int getCube();
};

#endif
