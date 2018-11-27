/*
**	一无符号整型数,取出其右数的第4到第7位
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN sizeof(unsigned int) * 8

/*---无符号整型的二进制形式显示---*/
void bit_display(unsigned int n)
{
	int bit_arr[LEN] = { 0 };
	/*---取出每一位放入数组中---*/
	for (int i = LEN - 1; i >= 0; --i)
	{
		bit_arr[i] = n % 2;
		n /= 2;
	}
	/*---打印该数组---*/
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-2d", bit_arr[i]);
	}
	printf("\n");
}

int main()
{
	unsigned int number = 0;
	unsigned int result = 0;
	printf("请输入该无符号整型数字: \n");
	scanf("%u", &number);
	/*---number的二进制形式打印---*/
	printf("%d二进制形式如下: \n", number);
	bit_display(number);
	result = (number >> 4) & (~(~0 << 4));
	/*---result的二进制形式打印---*/
	printf("取出的右数第4到第7位结果如下: \n");
	for (int i = 0; i < 4; ++i)
	{
		printf("%-2d", result % 2);
		result /= 2;
	}
	printf("\n");
	system("pause");
	return 0;
}