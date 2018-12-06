/*
**	连续整数和问题
**	给定一个整数x, 求出所有的连续的且和为x的整数
**	例如给定27, 结果为2~7, 8~10, 13~14 
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int number = 0;
	int sum = 0;
	int result = 0;
	int j = 1;
	int temp = 0;
	printf("请输入一个整数: \n");
	scanf("%d", &number);
	for (int i = j; i <= number / 2 + 2;)
	{
		temp = number - sum;
		if (temp > 0)
		{
			sum = sum + i++;
		}
		if (temp < 0)
		{
			sum = sum - j++;
		}
		if (temp == 0)
		{
			for (int k = j; k < i; ++k)
			{
				printf("%-4d", k);
			}
			sum = sum + i++;
			++result;
			printf("\n");
		}
	}
	printf("有%d组连续整数和为%d!\n", result, number);
	system("pause");
	return 0;
}