#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int isUglyNumber(int num)
{
	if (num <= 0)
	{
		return 0;
	}
	while (num % 2 == 0)
	{
		num /= 2;
	}
	while (num % 3 == 0)
	{
		num /= 3;
	}
	while (num % 5 == 0)
	{
		num /= 5;
	}
	return num == 1;
}

int getNthUglyNumber(int num)
{
	int i = 0;
	int n = 0;
	int flag = 0;
	while (num)
	{
		flag = isUglyNumber(n);
		if (flag == 1)
		{
			--num;
		}
		++n;
		flag = 0;
	}
	return n - 1;
}

int main()
{
	int num = 0;
	int flag = 0;
	int result = 0;
	printf("Please input the num: \n");
	scanf("%d", &num);
	result = getNthUglyNumber(num);
	printf("The No.%d ugly number is: %d\n", num, result);
	system("pause");
	return 0;
}