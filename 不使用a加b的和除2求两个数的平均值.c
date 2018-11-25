/*
**	不使用(a + b) / 2求两个数的平均值
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int number1 = 10;
	int number2 = 20;
	int average_number = 0;
	/*
	**	方法一: 用大数减去小的数,
	**	给小的数加上两数之差的一半
	*/
	average_number = (number2 - number1) / 2 + number1;
	/*
	**	方法二: 两数的二进制相同部分
	**	按位与,不同部分异或,最后相加
	*/
	average_number = (number1 & number2) + ((number1 ^ number2) >> 1);
	printf("%d\n", average_number);
	system("pause");
	return 0;
}