/*
**	移位操作符实现循环左移和循环右移
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN sizeof(unsigned int) * 8

/*---循环右移n位---*/
unsigned int move_right(unsigned int number, int n)
{
	unsigned int result = 0;
	result = (number >> n) | (number << (LEN - n));
	return result;
}

/*---循环左移n位---*/
unsigned int move_left(unsigned int number, int n)
{
	unsigned int result = 0;
	result = (number << n) | (number >> (LEN - n));
	return result;
}

int main()
{
	unsigned int number = 0;
	int n = 0;
	printf("请输入无符号整型数字: \n");
	scanf("%u", &number);
	printf("请输入循环移位的位数n: \n");
	scanf("%d", &n);
	printf("循环右移%d位后的结果为: \n", n);
	number = move_right(number, n);
	printf("%d\n", number);
	printf("循环左移%d位后的结果为: \n", n);
	number = move_left(number, n);
	printf("%d\n", number);
	system("pause");
	return 0;
}