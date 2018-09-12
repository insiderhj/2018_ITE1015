#include <stdio.h>

int cha = 'A' - 'a';
void toLowerUpper(char*);

int main()
{
	char msg[11] = {'\0', };
	char* ptr = msg;

	scanf("%s", msg);

	toLowerUpper(ptr);
	printf("%s\n", msg);
	
	return 0;
}

void toLowerUpper(char* mPtr)
{
	for (char* i = mPtr; i < mPtr + 10; i++) {
		if (*i == '\0') return;
		if (*i >= 'a' && *i <= 'z') *i += cha;
		else *i -= cha;
	}
}
