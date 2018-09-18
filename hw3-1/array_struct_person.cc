#include <stdio.h>

typedef struct {
	char name[10];
	int age;
} Person;

int main()
{
	Person saramdul[3];
	
	for (int i = 0; i < 3; i++) {
		scanf("%s", saramdul[i].name);
		scanf("%d", &saramdul[i].age);
	}

	for (int i = 0; i < 3; i++) {
		printf("Name:%s, Age:%d\n", (saramdul + i) -> name, (saramdul + i) -> age);
	}
	return 0;
}
