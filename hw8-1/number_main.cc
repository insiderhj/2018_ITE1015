#include <iostream>
#include <string>
#include "number.h"

using namespace std;

int main()
{
	string arg;
	int num;

	while (true) {
		cin >> arg;
		if (arg == "quit") return 0;

		cin >> num;
		if (arg == "number" ) {
			Number n(num);
			cout << "getNumber(): " << n.getNumber() << endl;
		} else if (arg == "square" ) {
			Square s(num);
			cout << "getNumber(): " << s.getNumber() << endl
			     << "getSquare(): " << s.getSquare() << endl;
		} else if (arg == "cube" ) {
			Cube c(num);
			cout << "getNumber(): " << c.getNumber() << endl
			     << "getSquare(): " << c.getSquare() << endl
			     << "getCube(): " << c.getCube() << endl;
		}
	}
	return 0;
}
