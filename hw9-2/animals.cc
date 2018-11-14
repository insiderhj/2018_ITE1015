#include "animals.h"
#include <iostream>
#include <string>

using namespace std;

void Zebra::printInfo() {
	cout << "Zebra, Name: " << name << ", Age: " << age << ", Number of stripes: " << numStripes << endl;
}

void Cat::printInfo() {
	cout << "Cat, Name: " << name << ", Age: " << age << ", Favorite toy: " << favoriteToy << endl;
}
