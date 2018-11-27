#include "my_string.h"
#include <iostream>

using namespace std;

MyString::~MyString() {
	if (a != nullptr) delete[] a;
	a = nullptr;
}

MyString& MyString::operator=(const MyString& b) {
	if (a != nullptr) delete[] a;
	len = b.len;
	a = new char[len];
	for (int i = 0; i < len; i++) a[i] = b.a[i];
	return *this;
}

MyString MyString::operator+(const MyString& b) {
	MyString temp;
	temp.len = len + b.len;
	temp.a = new char[temp.len];
	for (int i = 0; i < len; i++) temp.a[i] = a[i];
	for (int i = 0; i < b.len; i++) temp.a[i + len] = b.a[i];
	return temp;
}

MyString MyString::operator*(const int b) {
	MyString temp;
	temp.len = len * b;
	temp.a = new char[temp.len];
	for (int i = 0; i < temp.len; i++) temp.a[i] = a[i % len];
	return temp;
}

ostream& operator<<(ostream& out, MyString& my_string) {
	for (int i = 0; i < my_string.len; i++) out << my_string.a[i];
	return out;
}

istream& operator>>(istream& in, MyString& my_string) {
	char temp[51];
	char hangul;
	int length = 0;
	for (int i = 0; i < 50; i++, length++) {
		hangul = getchar();
		if (hangul == ' ' || hangul == '\n') break;
		temp[i] = hangul;
	}

	my_string.len = length;	
	if (my_string.a != nullptr) delete[] my_string.a;
	my_string.a = new char[length];
	for (int i = 0; i < length; i++) my_string.a[i] = temp[i];

	return in;
}
