/*
** 2018_11_03
** C����
** ���ú���ʵ���������Ľ���
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
	printf("����֮ǰ: a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("����֮��: a = %d, b = %d\n", a, b);
	system("pause");
	return 0;
}