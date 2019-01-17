/*
**	memmove函数的模拟实现
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "assert.h"

#define LEN 20

//随机数
int randomNumber()
{
	return 11 + rand() % (99 - 11 + 1);
}

//数组初始化
void arrInit(int arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		arr[i] = randomNumber();
	}
}

//数组打印
void arrDisplay(int arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		printf("%-5d", arr[i]);
	}
	printf("\n");
}

//内存拷贝, 考虑缓冲区重合的问题
int* myMemmove(int* dest, const int* src, int num)
{
	assert(dest != NULL);
	assert(src != NULL);
	assert(num >= 0);
	char* p1 = (char*)dest;
	char* p2 = (char*)src;
	if (dest >= src && dest <= (src + num))
	{
		//倒着拷贝
		for (int i = (num - 1) * 4; i >= 0; --i)
		{
			*(p1 + i) = *(p2 + i);
		}
	}
	else
	{
		for (int i = 0; i < num * (int)sizeof(int); ++i)
		{
			*(p1 + i) = *(p2 + i);
		}
	}
	return dest;
}

int main()
{
	srand((unsigned int)time(0));
	int arr1[LEN] = { 0 };
	int arr2[LEN] = { 0 };
	arrInit(arr2, LEN);
	printf("数组1打印如下: ");
	arrDisplay(arr1, LEN);
	printf("数组2打印如下: ");
	arrDisplay(arr2, LEN);
	myMemmove(arr1, arr2, LEN * sizeof(int));
	printf("拷贝后的数组1打印如下: ");
	arrDisplay(arr1, LEN);
	printf("拷贝后的数组2打印如下: ");
	arrDisplay(arr2, LEN);
	system("pause");
	return 0;
}