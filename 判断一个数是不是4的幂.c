/*
**	�ж�һ�����ǲ���4����
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---�ж�һ�����ǲ���4����---*/
int isPowerOfFour(int n)
{
	if (n == 1)
	{
		return 1;
	}
	while (n > 1)
	{
		if (n % 4 != 0)
		{
			break;
		}
		n /= 4;
	}
	return n == 1;
}

int main()
{
	int num = 0;
	int flag = 0;
	printf("������һ���Ǹ�����: \n");
	scanf("%d", &num);
	if (num <= 0)
	{
		printf("�������!\n");
		return 0;
	}
	flag = isPowerOfFour(num);
	if (flag == 1)
	{
		printf("%d��4����!\n", num);
	}
	else
	{
		printf("%d����4����!\n", num);
	}
	system("pause");
	return 0;
}