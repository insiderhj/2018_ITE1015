#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv)
{
	if (argc != 3) return -1;
	int n = atoi(argv[2]);
	for (int i = 0; i < n; i++)
		cout << argv[1] << endl;
	return 0;
}
