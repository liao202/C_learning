#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 1024

char* myStrncpy(char* dest, 
	const char* src, int num)
{
	assert(dest != NULL);
	assert(src != NULL);
	assert(num >= 0);

	int i = 0;

	for (i = 0; i < num; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return dest;
}

int main()
{
	char str[N] = { 0 };

	printf("%s\n", 
		myStrncpy(str, "hello, world!", 10));

	system("pause");
	return 0;
}