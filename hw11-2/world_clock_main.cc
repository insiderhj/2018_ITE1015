#include "world_clock.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	string arg;
	WorldClock c;

	while (true) {
		cin >> arg;
		if (arg == "quit") return 0;
		if (arg == "set") cin >> c;
		else {
			int seconds;
			cin >> seconds;
			c.Tick(seconds);
		}
		cout << c << endl;
	}

	return 0;
}
