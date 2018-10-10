#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main(int argc, char** argv)
{
	int num = 0;
	char str[65536];
	for (int i = 1; argv[i] != NULL; i++) {
		if (atoi(argv[i]) == 0) {
			strcat(str, argv[i]);
		} else {
			num += atoi(argv[i]);
		}
	}
	
	cout << str << endl << num << endl;
	return 0;
}
