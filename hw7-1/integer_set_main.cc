#include <vector>
#include <iostream>
#include "integer_set.h"

using namespace std;

int main()
{
	IntegerSet is;
	string arg;
	int num;
	while (true) {
		cin >> arg;
		if (arg == "quit") return 0;
		cin >> num;

		if (arg == "add") is.AddNumber(num);
		else if (arg == "del") is.DeleteNumber(num);
		else if (arg == "get") {
			cout << is.GetItem(num) << endl;
			continue;
		}

		for (int i = 0; i < is.GetAll().size(); i++) {
			cout << is.GetAll()[i] << " ";
		} cout << endl;
	}
	return 0;
}
