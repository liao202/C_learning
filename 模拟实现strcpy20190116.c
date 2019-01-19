/*
**	模拟实现strcpy	
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "assert.h"

#define LEN 20

//字符串拷贝函数
char* myStrcpy(char* str1, char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	int i = 0;
	while (*(str2 + i) != '\0')
	{
		*(str1 + i) = *(str2 + i);
		++i;
	}
	*(str1 + i) = '\0';
	return str1;
}

int main()
{
	char str[LEN] = "hehe";
	printf("初始字符串打印如下: %s\n",
		str);
	myStrcpy(str, "hello, world");
	printf("拷贝后的字符串打印如下: %s\n",
		str);
	system("pause");
	return 0;
}