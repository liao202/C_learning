/*
**	二进制位的循环左移和循环右移
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN sizeof(unsigned int) * 8

/*---十进制转二进制,将二进制放入数组中---*/
void ten_two(int arr[], unsigned int n)
{
	for (int i = LEN - 1; i >= 0; --i)
	{
		arr[i] = n % 2;
		n /= 2;
	}
}

/*---数组中的二进制位打印---*/
void bit_arr_display(int arr[])
{
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-2d", arr[i]);
	}
	printf("\n");
}

/*---循环右移---*/
void move_right(int arr[], int n)
{
	int temp = 0;
	/*---右移n位---*/
	for (int i = n; i > 0; --i)
	{
		temp = arr[LEN - 1];
		for (int j = 1; j < LEN; ++j)
		{
			arr[LEN - j] = arr[LEN - j - 1];
		}
		arr[0] = temp;
	}
}

/*---循环左移---*/
void move_left(int arr[], int n)
{
	int temp = 0;
	/*---左移n位---*/
	for (int i = n; i > 0; --i)
	{
		temp = arr[0];
		for (int j = LEN; j > 1; --j)
		{
			arr[LEN - j] = arr[LEN - j + 1];
		}
		arr[LEN - 1] = temp;
	}
}

int main()
{
	unsigned int number = 0;
	int bit_arr[LEN] = { 0 };
	int n = 0;
	printf("请输入无符号整型数字: \n");
	scanf("%u", &number);
	ten_two(bit_arr, number);
	printf("%d的二进制形式如下: \n", number);
	/*---打印number的二进制形式---*/
	bit_arr_display(bit_arr);
	printf("请输入循环左移的位数: \n");
	scanf("%d", &n);
	/*---循环左移n位---*/
	move_left(bit_arr, n);
	printf("循环左移%d位后的结果如下: \n", n);
	/*---打印number的二进制形式---*/
	bit_arr_display(bit_arr);
	printf("请输入循环右移的位数: \n");
	scanf("%d", &n);
	/*---循环右移n位---*/
	move_right(bit_arr, n);
	printf("循环右移%d位后的结果如下: \n", n);
	/*---打印number的二进制形式---*/
	bit_arr_display(bit_arr);
	system("pause");
	return 0;
}