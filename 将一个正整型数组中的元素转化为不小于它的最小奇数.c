/*
**	将一个正整型数组中的元素转化为不小于它的最小奇数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 7

/*---数组打印---*/
void arr_display(int arr[])
{
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-3d", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1, 2, 4, 5, 9, 15, 18 };
	printf("转化前的数组: \n");
	arr_display(arr);
	for (int i = 0; i < LEN; ++i)
	{
		arr[i] |= 1;
	}
	printf("转化后的数组: \n");
	arr_display(arr);
	system("pause");
	return 0;
}