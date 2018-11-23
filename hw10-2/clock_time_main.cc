#include "clocks.h"
#include "clock_time.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<Clock*> clocks;
	int t;

	clocks.push_back(new SundialClock(0, 0, 0));
	clocks.push_back(new CuckooClock(0, 0, 0));
	clocks.push_back(new GrandFatherClock(0, 0, 0));
	clocks.push_back(new WristClock(0, 0, 0));
	clocks.push_back(new AtomicClock(0, 0, 0));

	cin >> t;

	for (auto clock: clocks) clock->reset();
	cout << "Reported clock times after resetting:" << endl;
	for (auto clock : clocks) clock->displayTime();

	cout << endl << "Running the clocks..." << endl << endl;
	for (auto clock : clocks) {
		for (int i = 0; i < t; i++) clock->tick();
	}
	cout << "Reported clock times after running:" << endl;
	for (auto clock : clocks) {
		clock->displayTime();
		delete clock;
	}

	return 0;
}
