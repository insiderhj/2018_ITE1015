#include <stdio.h>

typedef struct {
	char name[7];
	int score;
} Person;

void printScoreStars(Person*, int);

int main()
{
	Person saramdul[3];
	for (int i = 0; i < 3; i++) scanf("%s %d", saramdul[i].name, &saramdul[i].score);
	printScoreStars(saramdul, 3);
	return 0;
}

void printScoreStars(Person* persons, int len)
{
	for (Person* i = persons; i < persons + len; i++) {
		printf("%s", i -> name);
		for (int jumsoo = i -> score; jumsoo >= 5; jumsoo -= 5) printf("*");
		printf("\n");
	}
}
