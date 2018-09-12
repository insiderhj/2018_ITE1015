#include <stdio.h>

void getSumDiff(int, int, int*, int*);

int main()
{
	int ill, yee, sum, diff;

	scanf("%d %d", &ill, &yee);
	getSumDiff(ill, yee, &sum, &diff);
	
	printf("Sum: %d\ndiff: %d\n", sum, diff);
	return 0;
}

void getSumDiff(int a, int b, int* pSum, int* pDiff)
{
	*pSum = a + b;
	*pDiff = a - b;
}
