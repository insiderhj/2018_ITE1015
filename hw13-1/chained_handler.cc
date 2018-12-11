#include <iostream>
#include <string>
using namespace std;

int data_size = 5;
class A {
};

class B : public A {
};

class C : public B {
};

int main() {
	int n;
	cout << "input num(0~2): ";
	cin >>n;

	try {
		if (n == 0) throw new A;
		else if (n == 1) throw new B;
		else if (n == 2) throw new C;
		else throw string("Invalid input");
	} catch(string& s) {
		cout << s << endl;
	} catch (C* c) {
		cout << "throw new C as been called" << endl;
	} catch (B* b) {
		cout << "throw new B as been called" << endl;
	} catch (A* a) {
		cout << "throw new A as been called" << endl;
	}

	return 0;
}
