/*
**	模拟实现strncmp
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "assert.h"
#include "string.h"

#define LEN 1024

//字符串比较
int myStrncmp(char* str1, char* str2, int num)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	assert(num >= 0);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 == 0 && len2 != 0)
	{
		return -1;
	}
	if (len1 != 0 && len2 == 0)
	{
		return 1;
	}
	if (len1 == 0 && len2 == 0)
	{
		return 0;
	}
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
	return 0;
}

int main()
{
	char str1[LEN] = "hello, world!";
	char str2[LEN] = "hello, world!";
	int flag = myStrncmp(str1, str2, 3);
	if (flag > 0)
	{
		printf("str1 > str2!\n");
	}
	else if (flag < 0)
	{
		printf("str1 < str2!\n");
	}
	else
	{
		printf("str1 = str2!\n");
	}
	system("pause");
	return 0;
}