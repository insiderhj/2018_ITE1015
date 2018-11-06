#include <iostream>
#include <string>
#include "rectangle.h"

using namespace std;

int main() {
	string shape;
	int height, width;

	while (true) {
		cin >> shape;
		if (shape == "quit") return 0;

		if (shape == "nonsquare") {
			cin >> height >> width;
			NonSquare nonSquare(height, width);
			nonSquare.print();
		} else if (shape  == "square") {
			cin >> width;
			Square square(width);
			square.print();
		}
	}
	return 0;
}
