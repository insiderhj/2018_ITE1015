#include "class_function.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string str;
	vector<A*> objects;
	while (true) {
		cin >> str;
		if (str == "0") break;
		if (str == "B") objects.push_back(new B);
		if (str == "C") objects.push_back(new C);
		if (str == "BB") objects.push_back(new BB);
	}

	for (auto a : objects) {
		a->test1();
		a->test2();
	}

	for (auto a : objects) delete a;

	return 0;
}
