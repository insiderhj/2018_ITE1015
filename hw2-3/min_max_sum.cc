#include <stdio.h>

int getMin(int*);
int getMax(int*);
int getSum(int*);

int main()
{
	int nums[5];
	for (int i = 0; i < 5; i++) scanf("%d", nums + i);
	printf("min: %d\nmax: %d\nsum: %d\n", getMin(nums), getMax(nums), getSum(nums));
	return 0;
}

int getMin(int* lst)
{
	int min = *lst;
	for (int* i = lst + 1; i < lst + 5; i++)
		if (*i <= min) min = *i;

	return min;
}

int getMax(int* lst)
{
	int max = *lst;
	for (int* i = lst + 1; i < lst + 5; i++)
		if (*i >= max) max = *i;

	return max;
}

int getSum(int* lst)
{
	int sum = 0;
	for (int* i = lst; i < lst + 5; i++)
		sum+= *i;

	return sum;
}
