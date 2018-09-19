#include <stdio.h>

typedef struct {
	double shilsu;
	double heosu;
} Boksosu;

void printComplex(Boksosu&, Boksosu&);
void printAddComp(Boksosu&, Boksosu&);
void printMulComp(Boksosu&, Boksosu&);

int main()
{
	Boksosu nums[2];
	for (int i = 0; i < 2; i++) scanf("%lf %lf", &nums[i].shilsu, &nums[i].heosu);
	printComplex(nums[0], nums[1]);
	printAddComp(nums[0], nums[1]);
	printMulComp(nums[0], nums[1]);
	return 0;
}

void printComplex(Boksosu& ill, Boksosu& yee)
{
	printf("Complex number1:\n%lf + %lfi\n", ill.shilsu, ill.heosu);
	printf("Complex number2:\n%lf + %lfi\n", yee.shilsu, yee.heosu);
}

void printAddComp(Boksosu& ill, Boksosu& yee)
{
	double resultS, resultH;
	resultS = ill.shilsu + yee.shilsu;
	resultH = ill.heosu + yee.heosu;
	printf("Sum:\n%lf + %lfi\n", resultS, resultH);
}

void printMulComp(Boksosu& ill, Boksosu& yee)
{
	double resultS, resultH;
	resultS = ill.shilsu * yee.shilsu - ill.heosu * yee.heosu;
	resultH = ill.shilsu * yee.heosu + ill.heosu * yee.shilsu;
	printf("Multiplication:\n%lf + %lfi\n", resultS, resultH);
}
