/*
**	��ʹ�ù�ʽ(a + b) / 2
**	���������ľ�ֵ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---��ƽ��ֵ����һ---*/
int aver1(int n1, int n2)
{
	return (n1 + n2) >> 1;
}

int aver2(int n1, int n2)
{
	return n1 + ((n2 - n1) >> 1);
}

int aver3(int n1, int n2)
{
	return (n1 & n2 + n1 ^ n2) >> 1;
}

int main()
{
	int n1 = 10;
	int n2 = 20;
	int aver = 0;
	aver = aver1(n1, n2);
	printf("%d��%d�ľ�ֵΪ%d\n", n1, n2, aver);
	aver = aver2(n1, n2);
	printf("%d��%d�ľ�ֵΪ%d\n", n1, n2, aver);
	aver = aver3(n1, n2);
	printf("%d��%d�ľ�ֵΪ%d\n", n1, n2, aver);
	system("pause");
	return 0;
}