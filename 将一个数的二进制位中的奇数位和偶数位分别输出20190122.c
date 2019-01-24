#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void evenOddBitDisplay(int n)
{
	printf("奇数位打印如下: \n");
	for (int i = 0; i < 32; i += 2)
	{
		printf("%-2d", (n >> i) & 1);
	}
	printf("\n偶数位打印如下: \n");
	for (int i = 1; i < 32; i += 2)
	{
		printf("%-2d", (n >> i) & 1);
	}
	printf("\n");
}

int main()
{
	int num = 0;

	printf("请输入一个整数: \n");
	scanf("%d", &num);
	evenOddBitDisplay(num);

	system("pause");
	return 0;
}