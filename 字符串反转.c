/*
**	�ַ�����ת
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define LEN 100

//����
void swap(char* p1, char* p2)
{
	char temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

//�ַ�����ת
void reverseString(char* str)
{
	int left = 0;
	int right = strlen(str) - 1;
	while (left < right)
	{
		swap(&str[left], &str[right]);
		++left;
		--right;
	}
}

int main()
{
	char str[LEN] = { 0 };
	printf("�������ַ���: \n");
	gets(str);
	reverseString(str);
	printf("��ת����ַ�����ӡ����: \n");
	puts(str);
	system("pause");
	return 0;
}