/*
** 2018_11_02
** bite_c_5_2
** 整型有序数组中查找想要的数字二分法
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int array[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17};
	int num = 0;
	int left = 0;
	int right = sizeof(array) / sizeof(array[0]);
	int mid = 0;
	printf("请输入要查找的数字: ");
	scanf("%d", &num);
	while (left <= right)
	{	
		mid = (left + right) / 2;
		if (num > array[mid])
		{
			left = mid + 1;
		}
		else if (num < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("在array数组中找到了数字 %d,下标为: %d.\n", num, mid);
			break;
		}
	}
	if (left > right)
	{
		printf("在array数组中未找到数字 %d.\n", num);
	}
	system("pause");
	return 0;
}