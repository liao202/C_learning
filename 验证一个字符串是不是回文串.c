/*
**	验证一个字符串是不是回文串
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define LEN 100

//回文串判断
int isPalindrome(char* str)
{
	int i = 0;
	int j = 0;
	//去掉字符串中的非数字和字母
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
	//回文判断
	char* left = str;
	char* right = str + strlen(str) - 1;
	while (left <= right)
	{
		if (*left != *right)
		{
			return 0;
		}
		++left;
		--right;
	}
	return 1;
}

int main()
{
	char str[LEN] = { 0 };
	int flag = 0;
	printf("请输入字符串: \n");
	gets(str);
	flag = isPalindrome(str);
	if (flag == 1)
	{
		printf("是回文串!\n");
	}
	else
	{
		printf("不是回文串!\n");
	}
	system("pause");
	return 0;
}