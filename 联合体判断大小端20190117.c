/*
**	��С���ж�--���ַ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

void isLittleEnd1()
{
	int num = 1;
	char* p = (char*)&num;
	if (*p == 1)
	{
		printf("С��!\n");
	}
	else
	{
		printf("���!\n");
	}
}

//������
union UN
{
	int i;
	char c;
};

void isLittleEnd2()
{
	union UN u;
	u.i = 1;
	if (u.c == 1)
	{
		printf("С��!\n");
	}
	else
	{
		printf("���!\n");
	}
}

int main()
{
	isLittleEnd1();
	isLittleEnd2();
	system("pause");
	return 0;
}