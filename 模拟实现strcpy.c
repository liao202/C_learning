/*
**	模拟实现strcpy
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 100

//字符串拷贝函数
void myStrcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*(dest++) = *(src++);
	}
}

int main()
{
	char str1[LEN] = "hello, world!";
	char str2[LEN] = { 0 };
	printf("拷贝前的两个字符串打印如下: \n");
	puts(str1);
	puts(str2);
	myStrcpy(str2, str1);
	printf("拷贝后的两个字符串打印如下: \n");
	puts(str1);
	puts(str2);
	system("pause");
	return 0;
}