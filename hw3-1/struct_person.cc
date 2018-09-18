#include <stdio.h>

typedef struct {
	char name[10];
	int age;
} Person;

int main()
{
	Person saram;

	scanf("%s", saram.name);
	scanf("%d", &saram.age);

	printf("name: ");
	puts(saram.name);
	printf("age: %d\n", saram.age);

	return 0;
}
