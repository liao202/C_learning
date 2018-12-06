/*
**	密码问题之加密
**	加密规则如下
**	密码为4位
**	对每一位都加上5再模10, 以该余数来代替
**	将第一位和第四位, 第二位和第三位进行交换
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 4

/*---加密---*/
void encrypt(int number)
{
	int i = LEN - 1;
	int password[LEN] = { 0 };
	/*---将数字放入数组---*/
	while (number != 0)
	{
		password[i--] = number % 10;
		number /= 10;
	}
	/*---对每位进行加密---*/
	for (int i = 0; i < LEN; ++i)
	{
		password[i] = (password[i] + 5) % 10;
	}
	/*---交换, 第一位和第四位, 第二位和第三位---*/
	for (int i = 0; i < LEN / 2; ++i)
	{
		int temp = 0;
		temp = password[i];
		password[i] = password[LEN - i - 1];
		password[LEN - i - 1] = temp;
	}
	printf("加密后的结果为: \n");
	for (int i = 0; i < LEN; ++i)
	{
		printf("%d", password[i]);
	}
	printf("\n");
}

int main()
{
	int number = 0;
	printf("请输入四位数字: \n");
	scanf("%d", &number);
	encrypt(number);
	system("pause");
	return 0;
}