#include <iostream>
using namespace std;

class A {
	int n_ID;
	int* data;
public:
	A(int n) {
		if (n <= 0) throw "exception";
		cout << "ID=" << n << ": constructed" << endl;
		n_ID = n;
		data = new int[n];
	}

	~A() {
		cout << "ID=" << n_ID << ": destroyed" << endl;
		delete[] data;
	}
};

int main() {
	try {
		A a(3);
		A b(2);
		{
			A c(1);
			A d(0);
			A e(-1);
		}
	} catch (const char* e) {
		cout << "caught in the main" << endl;
	}
}
