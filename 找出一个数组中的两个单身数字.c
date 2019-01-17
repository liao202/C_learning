/*
**	找出一个数组中的两个单身数字
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 14

//寻找两个单身数
void findLonelyNumber(int arr[], int len, 
	int* num1, int* num2)
{
	int temp = 0;
	int pos = -1;
	//连续做异或
	for (int i = 0; i < len; ++i)
	{
		temp ^= arr[i];
	}
	//找到异或结果中某个1的位置
	for (int i = 0; i < 32; ++i)
	{
		if (((temp >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	//根据这个1的位置将数组分为两组
	for (int i = 0; i < len; ++i)
	{
		//分别对每一组连续异或
		if (((arr[i] >> pos) & 1) == 1)
		{
			*num1 ^= arr[i];
		}
		else
		{
			*num2 ^= arr[i];
		}
	}
}

int main()
{
	int arr[] = { 6, 3, 2, 9, 8,
		3, 5, 6, 1, 7, 8, 1, 2, 9 };
	int num1 = 0;
	int num2 = 0;
	findLonelyNumber(arr, LEN, &num1, &num2);
	printf("两个单身数为: %d %d\n", num1, num2);
	system("pause");
	return 0;
}