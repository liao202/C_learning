#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 1024

int myStrcmp(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1 == *str2 && *str1 != '\0')
	{
		++str1;
		++str2;
	}
	return *str1 - *str2;
}

int main()
{
	char str[N] = "hello, world!";
	int flag = myStrcmp(str, "hello");
	if (flag > 0)
	{
		printf("%s > %s\n", str, "hello");
	}
	else if (flag < 0)
	{
		printf("%s < %s\n", str, "hello");
	}
	else
	{
		printf("%s = %s\n", str, "hello");
	}
	system("pause");
	return 0;
}