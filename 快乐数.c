/*
**	������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---������---*/
int isHappyNumber(int n)
{
	int temp = 0;
	while (n != 1)
	{
		while (n > 0)
		{
			temp += (n % 10) * (n % 10);
			n /= 10;
		}
		n = temp;
		temp = 0;
		if (n == 4)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int num = 0;
	int flag = 0;
	printf("������һ������: \n");
	scanf("%d", &num);
	flag = isHappyNumber(num);
	if (flag == 1)
	{
		printf("%d�ǿ�����!\n", num);
	}
	else
	{
		printf("%d���ǿ�����!\n", num);
	}
	system("pause");
	return 0;
}