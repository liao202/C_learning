/*
**	一级指针传参
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

void print(int* p, int sz)
{
	for (int i = 0; i < sz; ++i)
	{
		printf("%-2d", *(p + i));
	}
	printf("\n");
}

int main()
{
	int arr[10] = { 1, 2, 3, 
		4, 5, 6, 7, 8, 9 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(p, sz);
	system("pause");
	return 0;
}