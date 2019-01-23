#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void everyBidDisplay2(int n)
{
	while (n > 0)
	{
		printf("%-2d", n % 10);
		n /= 10;
	}
	printf("\n");
}

void everyBitDisplay1(int n)
{
	if (n > 9)
	{
		everyBitDisplay1(n / 10);
	}
	printf("%-2d", n % 10);
}

int main()
{
	int num = 0;

	printf("请输入一个正整数: \n");
	scanf("%d", &num);
	everyBitDisplay1(num);
	printf("\n");
	everyBidDisplay2(num);

	system("pause");
	return 0;
}