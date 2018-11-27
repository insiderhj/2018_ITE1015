#include <iostream>
#include "my_vector.h"

using namespace std;

MyVector::~MyVector() {
	if (a != nullptr) delete[] a;
	a = nullptr;
}

MyVector& MyVector::operator=(const MyVector& b) {
	if (a != nullptr) delete[] a;
	max_num = b.max_num;
	a = new double[max_num];
	for (int i = 0 ; i < max_num; i++) a[i] = b.a[i];
	return *this;
}

MyVector MyVector::operator+(const MyVector& b) {
	MyVector temp(max_num);
	temp = *this;
	for (int i = 0; i < max_num; i++) temp.a[i] += b.a[i];
	return temp;
}

MyVector MyVector::operator-(const MyVector& b) {
	MyVector temp(max_num);
	temp = *this;
	for (int i = 0; i < max_num; i++) temp.a[i] -= b.a[i];
	return temp;
}

MyVector MyVector::operator+(const int b) {
	MyVector temp(max_num);
	temp = *this;
	for (int i = 0; i < max_num; i++) temp.a[i] += b;
	return temp;
}

MyVector MyVector::operator-(const int b) {
	MyVector temp(max_num);
	temp = *this;
	for (int i = 0; i < max_num; i++) temp.a[i] -= b;
	return temp;
}

ostream& operator<<(ostream& out, MyVector& b) {
	for (int i = 0; i < b.max_num; i++) out << b.a[i] << " ";
	return out;
}

istream& operator>>(istream& in, MyVector& b) {
	for (int i = 0; i < b.max_num; i++) in >> b.a[i];
	return in;
}

