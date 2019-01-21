/*
**	strncat的模拟实现
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "assert.h"

#define LEN 1024

//字符串拼接n个字符
char* myStrncat(char* dest, char* src, int num)
{
	assert(dest != NULL);
	assert(src != NULL);
	int i = 0;
	int j = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	while (src[j] != '\0' && j < num)
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	return dest;
}

int main()
{
	char str1[LEN] = "hello, ";
	char str2[LEN] = "world!heheda!";
	printf("字符串一: %s\n", str1);
	printf("字符串二: %s\n", str2);
	char* result = myStrncat(str1, str2, 6);
	printf("拼接后的字符串: %s\n", result);
	system("pause");
	return 0;
}