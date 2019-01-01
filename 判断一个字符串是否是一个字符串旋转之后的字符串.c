/*
**	�ж�һ���ַ����Ƿ�����һ�ַ�����ת֮����ַ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//ѭ������һλ
void rotateLeft(char arr[], int len)
{
	char temp = arr[0];
	for (int i = 0; i < len - 1; ++i)
	{
		arr[i] = arr[i + 1];
	}
	arr[len - 1] = temp;
}

//ѭ������һλ
void rotateRight(char arr[], int len)
{
	char temp = arr[len - 1];
	for (int i = len - 1; i > 0; --i)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = temp;
}

//�Ƿ�����ת�õ���
int isRotate(char str1[], char str2[])
{
	int len = strlen(str1);
	for (int i = 0; i < len; ++i)
	{
		rotateLeft(str1, len);
		if (strcmp(str1, str2) == 0)
		{
			return 1;
		}
	}
	for (int i = 0; i < len; ++i)
	{
		rotateRight(str1, len);
		if (strcmp(str1, str2) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	char str1[] = "aabcde";
	char str2[] = "bcdeaa";
	int flag = 0;
	flag = isRotate(str1, str2);
	if (flag == 1)
	{
		printf("��! \n");
	}
	else
	{
		printf("����! \n");
	}
	system("pause");
	return 0;
}