#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 1024

char* myStrncat(char* dest,
	const char* src, int num)
{
	assert(dest != NULL);
	assert(src != NULL);
	assert(num >= 0);

	char* temp = dest;
	int i = 0;

	while (*temp != '\0')
	{
		++temp;
	}
	for (i = 0; i < num; ++i)
	{
		temp[i] = src[i];
	}
	temp[i] = '\0';

	return dest;
}

int main()
{
	char str[N] = "hello, ";

	printf("str: %s\n", str);
	printf("str: %s\n",
		myStrncat(str, "world!", 6));

	system("pause");
	return 0;
}