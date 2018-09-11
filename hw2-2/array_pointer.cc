#include <stdio.h>

void doobae(double *);

int main()
{
	double myList[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double* parr = myList;
	doobae(parr);

	return 0;
}

void doobae(double* lst)
{
	for (double *i = lst; i < lst + 5; i++) {
		*i *= 2;
		printf("%lf\n", *i);
	}
}
