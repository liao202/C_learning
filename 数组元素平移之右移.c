/*
**	数组元素平移
**	将数组元素循环向右平移n次
**	移动次数不超过数组的长度
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 6

/*---数组元素打印---*/
void arrDisplay(int arr[])
{
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-3d", arr[i]);
	}
	printf("\n");
}

/*---数组循环右移1位---*/
void rotateRight(int arr[])
{
	int temp = 0;
	/*---最右边的元素存起来---*/
	temp = arr[LEN - 1];
	/*---每位向右移1位---*/
	for (int i = 1; i < LEN; ++i)
	{
		arr[LEN - i] = arr[LEN - i - 1];
	}
	/*---将最右赋给最左---*/
	arr[0] = temp;
}

int main()
{
	int n = 0;
	int arr[LEN] = { 1, 2, 3, 4, 5, 10 };
	printf("请输入循环右移的位数: \n");
	scanf("%d", &n);
	/*---循环右移前的数组---*/
	printf("循环右移前的数组: \n");
	arrDisplay(arr);
	/*---循环右移n位---*/
	for (int i = 0; i < n; ++i)
	{
		rotateRight(arr);
	}
	printf("循环右移%d位后的数组: \n", n);
	arrDisplay(arr);
	system("pause");
	return 0;
}