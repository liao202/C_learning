/*
**	���������͵���ϰ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	int n = 9;
	float* ptr_float = (float*)&n;
	printf("n��ֵΪ: %d\n", n);
	printf("ptr_floatָ���ֵΪ: %f\n", *ptr_float);
	*ptr_float = 9.0;
	printf("num��ֵΪ: %d\n", n);
	printf("ptr_floatָ���ֵΪ: %f\n", *ptr_float);
	system("pause");
	return 0;
}