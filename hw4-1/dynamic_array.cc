#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
	int giri;
	cin >> giri;
	int* arr = (int*)malloc(sizeof(int) * giri);
	for (int i = 0; i < giri; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < giri; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	free(arr);
	return 0;
}
