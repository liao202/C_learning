/*
**	strncat��ģ��ʵ��
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "assert.h"

#define LEN 1024

//�ַ���ƴ��n���ַ�
char* myStrncat(char* dest, char* src, int num)
{
	assert(dest != NULL);
	assert(src != NULL);
	int i = 0;
	int j = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	while (src[j] != '\0' && j < num)
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	return dest;
}

int main()
{
	char str1[LEN] = "hello, ";
	char str2[LEN] = "world!heheda!";
	printf("�ַ���һ: %s\n", str1);
	printf("�ַ�����: %s\n", str2);
	char* result = myStrncat(str1, str2, 6);
	printf("ƴ�Ӻ���ַ���: %s\n", result);
	system("pause");
	return 0;
}