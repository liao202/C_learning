/*
**	ģ��ʵ��strcpy
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 100

//�ַ�����������
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
	printf("����ǰ�������ַ�����ӡ����: \n");
	puts(str1);
	puts(str2);
	myStrcpy(str2, str1);
	printf("������������ַ�����ӡ����: \n");
	puts(str1);
	puts(str2);
	system("pause");
	return 0;
}