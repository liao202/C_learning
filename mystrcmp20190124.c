#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 1024

int myStrcmp(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 > *str2)
		{
			return 1;
		}
		else if (*str1 < *str2)
		{
			return -1;
		}
		else
		{
			++str1;
			++str2;
		}
	}
	if (*str1 == '\0' && *str2 != '\0')
	{
		return -1;
	}
	if (*str1 != '\0' && *str2 == '\0')
	{
		return 1;
	}
	return 0;
}

int main()
{
	char str1[N] = "hello, world!";
	int flag = myStrcmp(str1, "hello, world!");
	
	printf("%d\n", flag);

	system("pause");
	return 0;
}