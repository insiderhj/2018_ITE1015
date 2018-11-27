#ifndef __MY_STRING_H__
#define __MY_STRING_H__

#include <iostream>

class MyString {
private:
	int len;
	char* a;
public:
	MyString() : len(0), a(nullptr) {}
	MyString(MyString& my_string) : len(my_string.len), a(new char[my_string.len]) {}
	~MyString();

	MyString& operator=(const MyString&);

	MyString operator+(const MyString&);
	MyString operator*(const int);

	friend std::ostream& operator<<(std::ostream&, MyString&);
	friend std::istream& operator>>(std::istream&, MyString&);
};
	

#endif
