/*
**	��֤һ���ַ����ǲ��ǻ��Ĵ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define LEN 100

//���Ĵ��ж�
int isPalindrome(char* str)
{
	int i = 0;
	int j = 0;
	//ȥ���ַ����еķ����ֺ���ĸ
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
	//�����ж�
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
	printf("�������ַ���: \n");
	gets(str);
	flag = isPalindrome(str);
	if (flag == 1)
	{
		printf("�ǻ��Ĵ�!\n");
	}
	else
	{
		printf("���ǻ��Ĵ�!\n");
	}
	system("pause");
	return 0;
}