/*
**	���ַ������еķ���ĸ�ͷ����ֵĲ���ȫ��ȥ��
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 100

//�ַ�������
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
	printf("�������ַ���: \n");
	gets(str);
	adjust(str);
	printf("��������ַ�����ӡ����: \n");
	puts(str);
	system("pause");
	return 0;
}