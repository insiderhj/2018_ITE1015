#include <iostream>
#include <string>
#include "my_vector.h"

using namespace std;

int main() {
	int num;
	cin >> num;
	MyVector a(num);
	MyVector b(num);
	cout << "enter a" << endl;
	cin >> a;
	cout << "enter b" << endl;
	cin >> b;

	string arg1, arg2, arg3;
	MyVector c;
	while (true) {
		cin >> arg1;
		if (arg1 == "quit") return 0;
		if (arg1 == "a") {
			cin >> arg2;
			if (arg2 == "+") {
				cin >> arg3;
				if (arg3 == "a") c = a + a;
				else if (arg3 == "b") c = a + b;
				else c = a + stoi(arg3);
			} else {
				cin >> arg3;
				if (arg3 == "a") c = a - a;
				else if (arg3 == "b") c = a - b;
				else c = a - stoi(arg3);
			}
		} else {
			cin >> arg2;
			if (arg2 == "+") {
				cin >> arg3;
				if (arg3 == "a") c = b + a;
				else if (arg3 == "b") c = b + b;
				else c = b + stoi(arg3);
			} else {
				cin >> arg3;
				if (arg3 == "a") c = b - a;
				else if (arg3 == "b") c = b - b;
				else c = b - stoi(arg3);
			}
		}
		cout << c << endl;
	}

	return 0;
}
