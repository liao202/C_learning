/*
**	卡布列克运算, 任意一个四位数
**	只要它们各个位上的数字不完全
**	有如下规律, 用这四个数字
**	组成的新的最大数字, 减去组成
**	的最小数字, 得到两数之差, 重
**	复上述过程, 总能得到最后结果
**	6174, 差必须为四位数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 4

/*---取出四位数的每一位并放入数组digit中---*/
void takeOutEachBit(int number, int digit[LEN])
{
	int i = 0;
	while (number != 0)
	{
		digit[i++] = number % 10;
		number /= 10;
	}
}

/*---交换两个数的内容---*/
void swap(int* p1, int* p2)
{
	int temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

/*---数组中的元素从小到大冒泡排序---*/
void bubbleSort(int digit[])
{
	/*---将已序的数放到[0, bound]区间---*/
	for (int bound = 0; bound < LEN; ++bound)
	{
		for (int cur = LEN - 1; cur > bound; --cur)
		{
			if (digit[cur] < digit[cur - 1])
			{
				swap(&digit[cur], &digit[cur - 1]);
			}
		}
	}
}

/*---最大最小做差得到新的数---*/
int newNumber(int digit[])
{
	int ret = 0;
	/*---四个数字组成的最大数---*/
	int max = 0;
	/*---四个数字组成的最小数---*/
	int min = 0;
	/*---组成最大数---*/
	for (int i = 0, j = 1; i < LEN; ++i, j *= 10)
	{
		max += digit[i] * j;
	}
	/*---组成最小数---*/
	for (int i = 0, j = 1000; i < LEN; ++i, j /= 10)
	{
		min += digit[i] * j;
	}
	ret = max - min;
	return ret;
}

/*---检查得到的新四位数是否是四位数---*/
int isFourBitNumber(int n)
{
	if (n / 1000 == 0)
	{
		return 0;
	}
	return 1;
}

int main()
{
	int digit[LEN] = { 0 };
	int number = 0;
	int flag = 0;
	printf("请输入一个每一位不完全相同的四位数字: \n");
	scanf("%d", &number);
	while (1)
	{
		takeOutEachBit(number, digit);
		bubbleSort(digit);
		number = newNumber(digit);
		flag = isFourBitNumber(number);
		/*---是四位数并且等于6147---*/
		if (flag == 1 && number == 6174)
		{
			printf("卡布列克运算成立!\n");
			break;
		}
	}
	system("pause");
	return 0;
}