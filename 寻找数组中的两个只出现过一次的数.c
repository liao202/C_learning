/*
**	寻找数组中只出现过一次的两个数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 100

//寻找两个只出现过一次的数
void twoLonelyNumber(int arr[], int len,
	int* p1, int* p2)
{
	int temp = 1;
	int posi = 0;
	//整体连续异或
	for (int i = 0; i < len; ++i)
	{
		temp ^= arr[i];
	}
	//寻找连续异或结果中的随便一个1的位置										
	for (int i = 0; i < 32; ++i)
	{
		if (((temp >> i) & 1) == 1)
		{
			posi = i;
			break;
		}
	}
	//根据连续异或的结果的某一个位置是否为1
	//分为两组
	for (int i = 0; i < len; ++i)
	{
		//两组分别连续异或
		if (((arr[i] >> posi) & 1) == 1)
		{
			*p1 ^= arr[i];
		}
		else
		{
			*p2 ^= arr[i];
		}
	}
}

int main()
{
	int arr[LEN] = { 4, 2, 7, 6, 3,
		5, 1, 2, 4, 3, 6, 5 };
	int num1 = 1;
	int num2 = 1;
	int len = sizeof(arr) / sizeof(arr[0]);
	twoLonelyNumber(arr, len, &num1, &num2);
	printf("只出现过一次的两个数分别为: %d, %d\n",
		num1, num2);
	system("pause");
	return 0;
}