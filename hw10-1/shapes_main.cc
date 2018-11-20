#include "shapes.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int tri_width, tri_height, rec_width, rec_height;
	vector<Shape*> shapes;
	cin >> tri_width >> tri_height >> rec_width >> rec_height;

	shapes.push_back(new Triangle(tri_width, tri_height));
	shapes.push_back(new Rectangle(rec_width, rec_height));

	for (auto shape : shapes) {
		cout << shape->getArea() << endl;
		delete shape;
	}

	return 0;
}
