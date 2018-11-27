/*
**	将一个无符号长整型的前两个字节和后两个字节作为两个无符号整型输出
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

union num
{
	unsigned long number;
	unsigned short num_arr[2];
};

void trans(unsigned long number)
{
	union num num1;
	num1.number = number;
	printf("长整型数据为: %lu\n前两个字节为: %u\n后两个字节为: %u\n",
		num1.number, num1.num_arr[1], num1.num_arr[0]);
}

int main()
{
	unsigned long number = 0;
	printf("请输入无符号长整型number的值: \n");
	scanf("%lu", &number);
	trans(number);
	system("pause");
	return 0;
}

//  [11/26/2018 叄拾叄画生]