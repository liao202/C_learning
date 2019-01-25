#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 1024

const char* myStrchr(const char* str,
	char character)
{
	assert(str != NULL);

	while (*str != '\0')
	{
		if (*str == character)
		{
			return str;
		}
		++str;
	}

	return NULL;
}

int main()
{
	char str[N] = "hello, world!";

	printf("%s\n", myStrchr(str, 'w'));

	system("pause");
	return 0;
}