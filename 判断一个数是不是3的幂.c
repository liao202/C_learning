/*
**	�ж�һ�����ǲ���3����
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---�ж��ǲ���3����---*/
int isPowerOfThree(int n)
{
	while (n > 1)
	{
		if (n % 3 != 0)
		{
			break;
		}
		n /= 3;
	}
	return n == 1;
}

int main()
{
	int num = 0;
	int flag = 0;
	printf("������һ���Ǹ�����: \n");
	scanf("%d", &num);
	flag = isPowerOfThree(num);
	if (flag == 1)
	{
		printf("%d��3����!\n", num);
	}
	else
	{
		printf("%d����3����!\n", num);
	}
	system("pause");
	return 0;
}