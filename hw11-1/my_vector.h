#ifndef __MY_VECTOR_H__
#define __MY_VECTOR_H__

#include <iostream>

using namespace std;

class MyVector {
private:
	int max_num;
	double* a;
public:
	MyVector() : max_num(0), a(nullptr) {}
	MyVector(int max_num) : max_num(max_num), a(new double[max_num]) {}
	~MyVector();

	MyVector& operator=(const MyVector&);
	
	MyVector operator+(const MyVector&);
	MyVector operator-(const MyVector&);
	MyVector operator+(const int);
	MyVector operator-(const int);
	friend ostream& operator<<(ostream&, MyVector&);
	friend istream& operator>>(istream&, MyVector&);
};

#endif
