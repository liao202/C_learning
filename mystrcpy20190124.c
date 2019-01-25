#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 20

char* myStrcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);

	char* temp = dest;

	while (*src != '\0')
	{
		*temp = *src;
		++temp;
		++src;
	}

	return dest;
}

int main()
{
	char str[N] = { 0 };

	printf("str: %s\n", 
		myStrcpy(str, "hello, world!"));

	system("pause");
	return 0;
}