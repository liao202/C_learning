/*
** 2018_10_27
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int sort(int* p);
	int array_print(int* p);
	int a[3] = { 1, 5, 7 };
	int i = 0;
	printf("The original order: ");
	array_print(a);
	sort(a);
	printf("\nFrom large to small: ");
	array_print(a);
	printf("\n");
	system("pause");
	return 0;
}

int sort(int* p)
{
	int swap(int* a, int* b);
	if (*p < *(p + 1))
	{
		swap(p, p + 1);
	}
	if (*p < *(p + 2))
	{
		swap(p, p + 2);
	}
	if (*(p + 1) < *(p + 2))
	{
		swap(p + 1, p + 2);
	}
	return 0;
}

int swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}

int array_print(int* p)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%2d", *(p + i));
	}
	return 0;
}
