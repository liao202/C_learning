/*
** 2018_10_27
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int array_print(int* p);
	int array_swap(int* p1, int* p2);
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int b[10] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
	printf("The A array:\n");
	array_print(a);
	printf("The B array:\n");
	array_print(b);
	array_swap(a, b);
	printf("\nThe exchanged A array:\n");
	array_print(a);
	printf("The exchanged B array:\n");
	array_print(b);
	system("pause");
	return 0;
}

int array_print(int* p)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%3d", *(p + i));
	}
	printf("\n");
	return 0;
}

int array_swap(int* p1, int* p2)
{
	int temp = 0;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		temp = *(p1 + i);
		*(p1 + i) = *(p2 + i);
		*(p2 + i) = temp;
	}
	return 0;
}
