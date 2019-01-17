/*
**	strcmp的模拟实现
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "assert.h"
#include "string.h"

#define LEN 1024

//字符串的比较
int myStrcmp(char* dest, char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	int len1 = strlen(dest);
	int len2 = strlen(src);
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
	while (*dest != '\0' && *src != '\0')
	{
		if (*dest > *src)
		{
			return 1;
		}
		else if (*dest < * src)
		{
			return -1;
		}
		else
		{
			++dest;
			++src;
		}
	}
	if (*dest == '\0' && *src == '\0')
	{
		return 0;
	}
	else if (*src == '\0')
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int main()
{
	char str1[LEN] = "hello, world!";
	char str2[LEN] = "hello, world!";
	int flag = 0;
	flag = myStrcmp(str1, str2);
	if (flag > 0)
	{
		printf("str1 > str2!\n");
	}
	else if (flag == 0)
	{
		printf("str1 = str2!\n");
	}
	else
	{
		printf("str1 < str2!\n");
	}
	system("pause");
	return 0;
}