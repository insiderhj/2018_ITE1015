#include <iostream>
#include <string>

using namespace std;

void swap(int& n1, int& n2)
{
	int tmp = n1;
	n1 = n2;
	n2 = tmp;
}

void swap(string& s1, string& s2)
{
	string tmp = s1;
	s1 = s2;
	s2 = tmp;
}

int main()
{
	int a, b;
	string c;
	string d;
	cin >> a >> b >> c >> d;
	
	cout << "n1: " << a << ", n2: " << b << ", s1: " + c + ", s2: " + d << endl;
	
	swap(a, b);
	swap(c, d);

	cout << "n1: " << a << ", n2: " << b << ", s1: " + c + ", s2: " + d << endl;

	return 0;
}
