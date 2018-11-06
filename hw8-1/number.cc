#include "number.h"

Number::Number() { _num = 0; }

Number::Number(int num) { _num = num; }

void Number::setNumber(int num) { _num = num; }

int Number::getNumber() { return _num; }


Square::Square() { _num = 0; }

Square::Square(int num) { _num = num; }

int Square::getSquare() { return _num * _num; }


Cube::Cube() { _num = 0; }

Cube::Cube(int num) { _num = num; }

int Cube::getCube() { return getSquare() * _num; }
