#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void everyBitOfIntegerDisplay(int n)
{
	if (n > 9)
	{
		everyBitOfIntegerDisplay(n / 10);
	}
	printf("%-2d", n % 10);
}

int main()
{
	int num = 0;

	printf("请输入一个整数: \n");
	scanf("%d", &num);
	everyBitOfIntegerDisplay(num);
	printf("\n");

	system("pause");
	return 0;
}