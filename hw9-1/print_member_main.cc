#include <vector>
#include <string>
#include "print_member.h"

using namespace std;

int main() {
	vector<A*> objects;
	string test_string = "test";

	objects.push_back(new A(20));
	objects.push_back(new B(3.14));
	objects.push_back(new C(test_string));

	for (A* object : objects) object->print();

	for (A* object : objects) delete object;

	return 0;
}
