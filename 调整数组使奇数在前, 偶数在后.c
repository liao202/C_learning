/*
**	对一个数组进行调整, 使奇数在前, 偶数在后
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 100

/*---数值交换---*/
void swap(int* p1, int* p2)
{
	int temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

/*---数组调整---*/
void arrAdjust(int arr[])
{
	int* left = arr;
	int* right = arr + LEN - 1;
	while (left < right)
	{
		while (*left % 2 != 0)
		{
			++left;
		}
		while (*right % 2 != 1)
		{
			--right;
		}
		if (left < right)
		{
			swap(left, right);
		}
	}
}

int main()
{
	//随机种子
	srand((unsigned int)time(0));
	int arr[LEN] = { 0 };
	//数组初始化
	for (int i = 0; i < LEN; ++i)
	{
		//给数组元素赋随机值, 0~99
		arr[i] = 0 + rand() % (99 - 0 + 1);
	}
	//数组元素打印
	printf("数组元素如下: \n");
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-4d", arr[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
	arrAdjust(arr);
	printf("调整后的结果为: \n");
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-4d", arr[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
	system("pause");
	return 0;
}