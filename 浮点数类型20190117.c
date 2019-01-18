/*
**	浮点数类型的练习
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	int n = 9;
	float* ptr_float = (float*)&n;
	printf("n的值为: %d\n", n);
	printf("ptr_float指向的值为: %f\n", *ptr_float);
	*ptr_float = 9.0;
	printf("num的值为: %d\n", n);
	printf("ptr_float指向的值为: %f\n", *ptr_float);
	system("pause");
	return 0;
}