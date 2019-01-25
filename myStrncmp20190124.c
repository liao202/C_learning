#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 1024

int myStrncmp(const char* str1, const char* str2, int num)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	assert(num >= 0);

	while (*str1 != '\0' && *str2 != '\0' && num > 0)
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
			--num;
		}
	}
	if (num == 0)
	{
		return 0;
	}
	if (*str1 != '\0' && *str2 == '\0')
	{
		return 1;
	}
	if (*str1 == '\0' && *str2 != '\0')
	{
		return -1;
	}
	return 0;
}

int main()
{
	char str1[N] = "hello, world!";
	char str2[N] = "hello, world!";
	
	printf("%d\n", 
		myStrncmp(str1, str2, 6));

	system("pause");
	return 0;
}