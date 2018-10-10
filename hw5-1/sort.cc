#include "sort.h"

void swap(int& n1, int& n2)
{
	int tmp = n1;
	n1 = n2;
	n2 = tmp;
}

void sort(int* arr, int nums)
{
	for (int i = nums - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
}
