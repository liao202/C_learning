/*
**	指针传递参数值
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---形参改变不会影响实参---*/
void swap1(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = a;
}

/*---交换pa和pb中的地址---*/
void swap2(int* pa, int* pb)
{
	int* temp;
	temp = pa;
	pa = pb;
	pb = pa;
}

/*---通过指针改变两个指针指向的值---*/
void swap3(int* pa, int* pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	int* pa = &a;
	int* pb = &b;
	swap1(*pa, *pb);
	printf("a = %d, b = %d\n", *pa, *pb);
	swap2(pa, pb);
	printf("a = %d, b = %d\n", *pa, *pb);
	swap3(pa, pb);
	printf("a = %d, b = %d\n", *pa, *pb);
	system("pause");
	return 0;
}