/*
**	将字符数组中的非字母和非数字的部分全部去掉
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 100

//字符串调整
char* adjust(char* str)
{
	int i = 0;
	int j = 0;
	while (str[j] != 0)
	{
		if (str[j] >= 'a' && str[j] <= 'z' ||
			str[j] >= 'A' && str[j] <= 'Z' ||
			str[j] >= '0' && str[j] <= '9')
		{
			str[i++] = str[j];
		}
		++j;
	}
	str[i] = '\0';
	return str;
}

int main()
{
	char str[LEN] = { 0 };
	printf("请输入字符串: \n");
	gets(str);
	adjust(str);
	printf("调整后的字符串打印如下: \n");
	puts(str);
	system("pause");
	return 0;
}