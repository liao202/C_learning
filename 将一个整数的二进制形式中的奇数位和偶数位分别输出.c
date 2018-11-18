/*
**	讲一个整数的二进制形式中的奇数位和偶数位分别输出
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	unsigned int number = 0;
	int arr[32] = { 0 };
	int i = 0;
	printf("please input the number: \n");
	scanf("%d", &number);
	while (number)
	{
		arr[i] = number % 2;
		number /= 2;
		++i;
	}
	printf("%d的二进制数如下(由低位到高位): \n", number);
	for (i = 0; i < 32; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n奇数位如下: \n");
	for (i = 0; i < 32; ++i)
	{
		if ((i + 1) % 2 == 1)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n偶数位如下: \n");
	for (i = 0; i < 32; ++i)
	{
		if ((i + 1) % 2 == 0)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}