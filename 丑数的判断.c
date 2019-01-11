/*
**	�������ж�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//�����ж�
int isUgly(int n)
{
	if (n <= 0)
	{
		return 0;
	}
	while (n % 2 == 0)
	{
		n /= 2;
	}
	while (n % 3 == 0)
	{
		n /= 3;
	}
	while (n % 5 == 0)
	{
		n /= 5;
	}
	return n == 1;
}

int main()
{
	int num = 0;
	int flag = 0;
	printf("������һ������: \n");
	scanf("%d", &num);
	flag = isUgly(num);
	if (flag == 1)
	{
		printf("�ǳ���!\n");
	}
	else
	{
		printf("���ǳ���!\n");
	}
	system("pause");
	return 0;
}