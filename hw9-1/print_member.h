#ifndef __PRINT_MEMBER_H__
#define __PRINT_MEMBER_H__
#include <string>

class A {
private:
	int* memberA;
public:
	A(int);
	virtual ~A();
	virtual void print();
};

class B : public A {
private:
	double* memberB;
public:
	B(double);
	virtual ~B();
	virtual void print();
};

class C : public B {
private:
	std::string* memberC;
public:
	C(std::string);
	virtual ~C();
	virtual void print();
};

#endif
