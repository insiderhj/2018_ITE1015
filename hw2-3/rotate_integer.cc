#include <stdio.h>

void rotateLeft(int*, int*, int*);
void rotateRight(int*, int*, int*);

int main()
{
	int a = 10, b = 20, c = 30;
	int what;
	printf("%d:%d:%d\n", a, b, c);

	while (1) {
		scanf("%d", &what);
		if (what != 1 && what != 2) return 0;
		else if (what == 1) rotateLeft(&a, &b, &c);
		else  rotateRight(&a, &b, &c);
		printf("%d:%d:%d\n", a, b, c);
	}
	return 0;
}

void rotateLeft(int* pa, int* pb, int* pc)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = tmp;
}

void rotateRight(int* pa, int* pb, int* pc)
{
	int tmp = *pc;
	*pc = *pb;
	*pb = *pa;
	*pa = tmp;
}
