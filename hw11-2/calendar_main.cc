
#include "calendar.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	string arg;
	Date d;

	while (true) {
		cin >> arg;
		if (arg == "quit") return 0;
		if (arg == "set") cin >> d;
		else {
			cin >> arg;
			if (arg == "day") d.NextDay(1);
			else d.NextDay(stoi(arg));
		}
		cout << d << endl;
	}
	return 0;
}
