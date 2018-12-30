/*
**	计算两个数的和, 不使用+-
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//计算两数之和
int add(int n1, int n2)
{
	int temp = 0;
	while (n2 != 0)
	{
		//不进位的和
		temp = n1 ^ n2;
		//进位
		n2 = (n1 & n2) << 1;
		n1 = temp;
	}
	return n1;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("请输入两个整数: \n");
	scanf("%d %d", &num1, &num2);
	printf("两数之和为: %d\n", add(num1, num2));
	system("pause");
	return 0;
}