/*
**	字符指针
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	char str1[] = "hello, world!";
	char str2[] = "hello, world!";
	char* str3 = "hello, world!";
	char* str4 = "hello, world!";
	if (str1 == str2)
	{
		printf("str1 and str2 are same.\n");
	}
	else
	{
		printf("str1 and str2 are not same.\n");
	}
	//str3 和 str4 指向了同一个内存块
	if (str3 == str4)
	{
		printf("str3 and str4 are same.\n");
	}
	else
	{
		printf("str3 and str4 are not same.\n");
	}
	system("pause");
	return 0;
}