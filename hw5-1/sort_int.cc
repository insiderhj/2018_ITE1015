#include "sort.h"
#include <iostream>

using namespace std;

int main()
{
	int nums;
	int* arr;

	cin >> nums;
	if (nums <= 0) return 0;

	for (int i = 0; i < nums; i++) {
		cin >> arr[i];
	}

	sort(arr, nums);

	for (int i = 0; i < nums; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
