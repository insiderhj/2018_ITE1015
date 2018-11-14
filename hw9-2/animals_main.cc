#include "animals.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string type, name, favoriteToy;
	int age, numStripes;
	vector<Animal*> animals;

	while (true) {
		cin >> type;
	
		if (type == "z") {
			cin >> name >> age >> numStripes;
			animals.push_back(new Zebra(name, age, numStripes));
		} else if (type == "c") {
			cin >> name >> age >> favoriteToy;
			animals.push_back(new Cat(name, age, favoriteToy));
		} else if (type == "0") {
			for (Animal* animal : animals) animal->printInfo();
			return 0;
		}
	}
}
