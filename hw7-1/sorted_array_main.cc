#include <iostream>
#include <string>
#include <vector>
#include "sorted_array.h"

using namespace std;

int main() {
	SortedArray arr;
	string arg;

	while (true) {
		cin >> arg;

		if (check_number(arg)) {
			arr.AddNumber(stoi(arg));
			continue;
		}

		if (arg == "ascend") {
			for (int i = 0; i < arr.GetSortedAscending().size(); i++) {
				cout << arr.GetSortedAscending()[i] << " ";
			} cout << endl;
		}
		else if (arg == "descend") {	
			for (int i = 0; i < arr.GetSortedDescending().size(); i++) {
				cout << arr.GetSortedDescending()[i] << " ";
			} cout << endl;
		}
		else if (arg == "max") cout << arr.GetMax() << endl;
		else if (arg == "min") cout << arr.GetMin() << endl;
		else return 0;
	}
	return 0;
}
