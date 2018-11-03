/*
** 2018_11_03
** C语言
** 调用函数实现两个数的交换
*/

#include "stdio.h"
#include "stdlib.h"

void swap(int* a, int* b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("交换之前: a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("交换之后: a = %d, b = %d\n", a, b);
	system("pause");
	return 0;
}