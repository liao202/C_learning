#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 1024

char* myStrcat(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* temp = dest;

	while (*temp != '\0')
	{
		++temp;
	}
	while (*src != '\0')
	{
		*temp = *src;
		++temp;
		++src;
	}
	*temp = '\0';

	return dest;
}

int main()
{
	char str[N] = "hello, ";

	printf("str: %s\n",
		myStrcat(str, "world!"));

	system("pause");
	return 0;
}