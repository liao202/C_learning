/*
**	��ȫƽ�������ж�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//��ȫƽ�������ж�
int isPerfectSquare(int n)
{
	if (n < 0)
	{
		return 0;
	}
	if (n == 0 || n == 1)
	{
		return 1;
	}
	int i = 1;
	int j = n / 2;
	while (i <= j)
	{
		if (i * i == n)
		{
			return 1;
		}
		else
		{
			++i;
		}
	}
	return 0;
}

int main()
{
	int num = 0;
	int flag = 0;
	printf("������һ����: \n");
	scanf("%d", &num);
	flag = isPerfectSquare(num);
	if (flag == 1)
	{
		printf("����ȫƽ����!\n");
	}
	else
	{
		printf("������ȫƽ����!\n");
	}
	system("pause");
	return 0;
}