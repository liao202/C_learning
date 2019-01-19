/*
**	ģ��ʵ��strcpy	
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "assert.h"

#define LEN 20

//�ַ�����������
char* myStrcpy(char* str1, char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	int i = 0;
	while (*(str2 + i) != '\0')
	{
		*(str1 + i) = *(str2 + i);
		++i;
	}
	*(str1 + i) = '\0';
	return str1;
}

int main()
{
	char str[LEN] = "hehe";
	printf("��ʼ�ַ�����ӡ����: %s\n",
		str);
	myStrcpy(str, "hello, world");
	printf("��������ַ�����ӡ����: %s\n",
		str);
	system("pause");
	return 0;
}