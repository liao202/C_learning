/*
**	密码问题之多位密码的加密解密
**	加密规则如下
**	对每一位加5模10, 用余数替换
**	交换第一位和最后一位, 第二位和倒数第二位..
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 100

/*---加密---*/
void encrypt(int number[LEN])
{
	/*---加5模10, 余数代替---*/
	for (int i = 0; i < LEN; ++i)
	{
		number[i] = (number[i] + 5) % 10;
	}
	/*---交换, 第一位和最后一位, 第二位和倒数第二位..---*/
	for (int i = 0; i < LEN / 2; ++i)
	{
		int temp = 0; 
		temp = number[i];
		number[i] = number[LEN - i - 1];
		number[LEN - i - 1] = temp;
	}
	/*---加密后的结果打印---*/
	printf("加密后的结果为: \n");
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-2d", number[i]);
		if ((i + 1) % 20 == 0)
		{
			printf("\n");
		}
	}
}

/*---解密---*/
void deciphering(int number[LEN])
{
	/*---交换, 第一个和最后一个, 第二个和倒数第二个..---*/
	for (int i = 0; i < LEN / 2; ++i)
	{
		int temp = 0; 
		temp = number[i];
		number[i] = number[LEN - i - 1];
		number[LEN - i - 1] = temp;
	}
	/*---解密, 对每一位, 大于或等于5, -= 5, 小于5, += 5---*/
	for (int i = 0; i < LEN; ++i)
	{
		if (number[i] >= 5)
		{
			number[i] -= 5;
		}
		else if (number[i] < 5)
		{
			number[i] += 5;
		}
	}
	/*---解密后的结果打印---*/
	printf("解密后的结果为: \n");
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-2d", number[i]);
		if ((i + 1) % 20 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
}

int main()
{
	/*---随机种子---*/
	srand((unsigned int)time(0));
	int number[LEN] = { 0 };
	/*---随机生成100个数放入数组---*/
	for (int i = 0; i < LEN; ++i)
	{
		/*---产生0~9的随机数---*/
		number[i] = 0 + rand() % (9 - 0 + 1);
	}
	printf("加密前的数据: \n");
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-2d", number[i]);
		if ((i + 1) % 20 == 0)
		{
			printf("\n");
		}
	}
	encrypt(number);
	deciphering(number);
	system("pause");
	return 0;
}