/*
**	�ַ���ѭ������k���ַ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//ѭ������һλ
void rotateLeftOne(char arr[], int len)
{
	char temp = arr[0];
	for (int i = 0; i < len - 1; ++i)
	{
		arr[i] = arr[i + 1];
	}
	arr[len - 1] = temp;
}

//ѭ������nλ
void rotateLeft(char arr[], int len, int n)
{
	for (int i = 0; i < n; ++i)
	{
		rotateLeftOne(arr, len);
	}
}

int main()
{
	char arr[] = "hello, world!";
	int n = 0;
	int len = strlen(arr);
	printf("��ʼ�ַ�����ӡ����: \n");
	puts(arr);
	printf("������ѭ�����Ƶ�λ��: \n");
	scanf("%d", &n);
	printf("ѭ������%dλ����ַ�����ӡ����: \n", n);
	rotateLeft(arr, len, n);
	puts(arr);
	system("pause");
	return 0;
}