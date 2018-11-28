/*
**	将正整型数组中的所有元素转化为不大于它的最大偶数
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
	int arr[] = {2, 4, 7, 9, 11, 12, 15};
	printf("修改前的数组: \n");
	arr_display(arr);
	for (int i = 0; i < LEN; ++i)
	{
		arr[i] &= (~1);
	}
	printf("修改后的数组: \n");
	arr_display(arr);
	system("pause");
	return 0;
}