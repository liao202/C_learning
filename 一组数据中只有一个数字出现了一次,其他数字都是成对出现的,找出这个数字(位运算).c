//  [11/25/2018 叄拾叄画生]

/*
 *	一组数据中只有一个数出现了一次
 *	其他数都是成对出现的,找出这个数
 */

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
	int result = 0;
	/*---求数组元素个数---*/
	int size = sizeof(arr) / sizeof(arr[0]);
	result = arr[0];
	for (int i = 1; i < size; ++i)
	{
		/*---数组中元素两两异或,排除相同的元素---*/
		result ^= arr[i];
	}
	printf("%d\n", result);
	system("pause");
	return 0;
}