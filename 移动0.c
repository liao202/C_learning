/*
**	将数组中的0移动到数组的最后
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 40

//数组打印
void arrDisplay(int arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		printf("%-2d", arr[i]);
	}
	printf("\n");
}

//数组中元素0的调整
void moveZeros(int arr[], int len)
{
	int count = 0;
	for (int i = 0; i < len; ++i)
	{
		if (arr[i] != 0)
		{
			arr[count] = arr[i];
			++count;
		}
	}
	while (count < len)
	{
		arr[count] = 0; 
		++count;
	}
}

int main()
{
	srand((unsigned int)time(0));
	int arr[LEN] = { 0 };
	//数组元素的初始化
	for (int i = 0; i < LEN; ++i)
	{
		//随机值范围[0, 9]
		arr[i] = 0 + rand() % (9 - 0 + 1);
	}
	printf("初始数组打印如下: \n");
	arrDisplay(arr, LEN);
	moveZeros(arr, LEN);
	printf("调整后的数组打印如下: \n");
	arrDisplay(arr, LEN);
	system("pause");
	return 0;
}