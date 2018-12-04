#include <iostream>
#include <string>
#include "myswap.h"

using namespace std;

int main() {
	int a = 3, b = 1;
	cout << "a= " << a << " b= " << b << endl;
	myswap(a, b);
	cout << "a= " << a << " b= " << b << endl;

	double c = 3.1f, d = 1.5f;
	cout << "c= " << c << " d= " << d << endl;
	myswap(c, d);
	cout << "c= " << c << " d= " << d << endl;

	string e = "Hello", f = "World!";
	cout << "e= " << e << " f= " << f << endl;
	myswap(e, f);
	cout << "e= " << e << " f= " << f << endl;

	return 0;
}
