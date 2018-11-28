/*
**	调整数组中的元素,使奇数全部在前面,偶数全部在后面
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 11

int arr_new[LEN] = { 0 };

/*---数组打印函数---*/
void arr_display(int arr[])
{
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-3d", arr[i]);
	}
	printf("\n");
}

/*---数组调整函数---*/
void modi_arr(int arr[])
{
	int odd_count = 0;
	for (int i = 0; i < LEN; ++i)
	{
		/*---将奇数写入新数组中的前面---*/
		if (arr[i] % 2 == 1)
		{
			arr_new[odd_count] = arr[i];
			++odd_count;
		}
	}
	int even_count = odd_count;
	for (int i = 0; i < LEN; ++i)
	{
		/*---将偶数写入新数组中的后面---*/
		if (arr[i] % 2 == 0)
		{
			arr_new[even_count] = arr[i];
			++even_count;
		}
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	printf("调整前的数组如下: \n");
	arr_display(arr);
	modi_arr(arr);
	printf("调整后的数组如下: \n");
	arr_display(arr_new);
	system("pause");
	return 0;
}