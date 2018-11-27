#include <iostream>
#include "my_string.h"

using namespace std;

int main() {
	MyString a, b;
	cout << "enter a" << endl;
	cin >> a;
	cout << "enter b" << endl;
	cin >> b;
	
	string arg;
	MyString c;
	while (true) {
		cin >> arg;
		if (arg == "quit") return 0;
		if (arg == "a") {
			cin >> arg;
			if (arg == "+") {
				cin >> arg;
				if (arg == "a") c = a + a;
				else c = a + b;
			} else {
				cin >> arg;
				c = a * stoi(arg);
			}
		} else {
			cin >> arg;
			if (arg == "+") {
				cin >> arg;
				if (arg == "a") c = b + a;
				else c = b + b;
			} else {
				cin >> arg;
				c = b * stoi(arg);
			}
		}
		cout << c << endl;
	}

	return 0;
}
