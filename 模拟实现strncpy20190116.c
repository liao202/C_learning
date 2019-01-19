/*
**	ģ��ʵ��strncpy
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "assert.h"

#define LEN 1024

//�ַ�������n���ַ�
char* myStrncpy(char* dest, char* src, int num)
{
	assert(dest != NULL);
	assert(src != NULL);
	assert(num >= 0);
	int i = 0;
	while (*src != '\0' && i < num)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return dest;
}

int main()
{
	char str1[LEN] = "hehe";
	char str2[LEN] = "hello, world!heheda!";
	printf("�ַ���1: %s\n", str1);
	printf("�ַ���2: %s\n", str2);
	char* result = myStrncpy(str1, str2, 13);
	printf("��������ַ���Ϊ: %s\n", result);
	system("pause");
	return 0;
}