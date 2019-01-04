/*
**	模拟实现strcat
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 100

//字符串拼接函数
void myStrcat(char* dest, char* src)
{
	while (*dest != '\0')
	{
		++dest;
	}
	while (*src != '\0')
	{
		*dest = *src;
		++dest;
		++src;
	}
}

int main()
{
	char str1[LEN] = "hello, ";
	char str2[LEN] = "world!";
	printf("拼接前的两个字符串打印如下: \n");
	puts(str1);
	puts(str2);
	myStrcat(str1, str2);
	printf("拼接后的字符串打印如下: \n");
	puts(str1);
	system("pause");
	return 0;
}