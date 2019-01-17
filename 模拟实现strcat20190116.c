/*
**	ģ��ʵ��strcat
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "assert.h"

#define LEN 1024

//�ַ���ƴ�Ӻ���
char* myStrcat(char* dest, char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	int i = 0;
	while (*(dest + i) != '\0')
	{
		++i;
	}
	while (*src != '\0')
	{
		*(dest + i) = *src;
		++src;
		++i;
	}
	*(dest + i) = '\0';
	return dest;
}

int main()
{
	char str1[LEN] = "hello, ";
	printf("��ʼ�ַ�����ӡ����: %s\n",
		str1);
	myStrcat(str1, "world!");
	printf("ƴ�Ӻ���ַ�����ӡ����: %s\n", 
		str1);
	system("pause");
	return 0;
}