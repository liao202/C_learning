/*
**	转换成小写字母
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 100

/*---字符串转换函数---*/
char* toLowCase(char* str)
{
	char* temp = str;
	while (*temp != 0)
	{
		if (*temp >= 'A' && *temp <= 'Z')
		{
			*temp += 'a' - 'A';
		}
		++temp;
	}
	return str;
}

int main()
{
	char str[LEN] = { 0 };
	char* result = str;
	printf("请输入字符串: \n");
	gets(str);
	printf("转换前的字符串打印如下: \n");
	puts(str);
	result = toLowCase(str);
	printf("转换后的字符串打印如下: \n");
	puts(result);
	system("pause");
	return 0;
}