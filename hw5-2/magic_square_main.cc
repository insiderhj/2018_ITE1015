#include <stdlib.h>
#include <iostream>
#include "magic_square.h"

using namespace std;

int main(int argc, char** argv)
{
	int n = atoi(argv[1]);
	if (n % 2 != 1 || n == 1) return -1;

	int** mabangjin = new int*[n];
	for (int i = 0; i < n; i++) mabangjin[i] = new int[n];
	fill_in(mabangjin, n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << mabangjin[i][j] << " ";
		}
		cout << endl;
	}
	
	for (int i = 0; i < n; i++) delete[] mabangjin[i];
	delete[] mabangjin;
	return 0;
}
