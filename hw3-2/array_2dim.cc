#include <stdio.h>

int main()
{
	int nums[3][2] = {0, };
	int sums[2] = {0, };

	for (int i = 0; i < 3; i++) 
		for (int j = 0; j < 2; j++) 
			scanf("%d", &nums[i][j]);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", nums[i][j]);
			sums[j] += nums[i][j];
		}
		printf("\n");
	}

	for (int i = 0; i < 2; i++)
		printf("sum of thee %dsc column: %d\n", i + 1, sums[i]);
	
	return 0;
}
