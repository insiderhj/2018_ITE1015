#include <iostream>
#include <string>
#include <stdlib.h>
#include "minimal_fighter.h"

using namespace std;

int main() {
	string argument;
	string* todo;
	MinimalFighter* fighter;
	MinimalFighter* enemy;

	while (true) {
		getline(cin, argument);
		todo = split(argument, " ");

		if (todo[4] == "") return -1;
		if (todo[5] != "") return -1;
		for (int i = 0; i < 5; i++) {
			if (i == 2) {
				if (!(todo[i] == "H" || todo[i] == "A" || todo[i] == "F")) return -1;
			} else if (!check_number(todo[i])) return -1;
		}
	
		fighter = new MinimalFighter(atoi(todo[0].c_str()), atoi(todo[1].c_str()));
		enemy = new MinimalFighter(atoi(todo[3].c_str()), atoi(todo[4].c_str()));

		if (todo[2] == "H") fighter->hit(enemy);
		else if (todo[2] == "A") fighter->attack(enemy);
		else if (todo[2] == "F") fighter->fight(enemy);

		if (fighter->status() == Alive) cout << "H" << fighter->hp() << ", P" << fighter->power() << " / ";
		else cout <<"DEAD / ";

		if (enemy->status() == Alive) cout << "H" << enemy->hp() << ", P" << enemy->power() << endl;
		else cout << "DEAD" << endl;

		delete fighter;
		delete enemy;
		delete[] todo;
	}

	return 0;
}
