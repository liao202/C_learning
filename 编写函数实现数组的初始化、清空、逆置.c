/*
** 2018_11_03
** C语言
** 编写函数实现数组的初始化、清空和逆置
*/

#include "stdio.h"
#include "stdlib.h"

#define array_len 10

void array_init(int* pa)
{
	for (int i = 0; i < array_len; i++)
	{
		*(pa + i) = i;
	}
}

void array_print(int* pa)
{
	for (int i = 0; i < array_len; i++)
	{
		printf("%d ", *(pa + i));
	}
	printf("\n");
}

void array_empty(int* pa)
{
	for (int i = 0; i < array_len; i++)
	{
		*(pa + i) = 0;
	}
}

void array_reverse(int* pa)
{
	int temp = 0;
	for (int i = 0; i < array_len / 2; i++)
	{
		temp = *(pa + i);
		*(pa + i) = *(pa + array_len - i - 1);
		*(pa + array_len - i - 1) = temp;
	}
}

int main()
{
	int arr[array_len] = { 0 };
	printf("初始化后的数组为: \n");
	array_init(arr);
	array_print(arr);
	printf("逆置后的数组: \n");
	array_reverse(arr);
	array_print(arr);
	printf("清空数组: \n");
	array_empty(arr);
	array_print(arr);
	system("pause");
	return 0;
}