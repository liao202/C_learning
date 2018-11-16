/*
**	ͨ����������20�����֣��������Ǵ�С�������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

void swap(int* p1, int* p2)
{
	int temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

/*---ð������---*/
void bubble_sort(int* array, int size)
{
	/*---[0, bound]������򲿷�---*/
	int bound = 0;
	for (; bound < size; bound++)
	{
		int cur = size - 1;
		for (; cur > bound; cur--)
		{
			if (array[cur] < array[cur - 1])
			{
				swap(&array[cur], &array[cur - 1]);
			}
		}
	}
}

int main()
{
	int array[10] = { 0 };
	int array_size = 0;
	array_size = sizeof(array) / sizeof(array[0]);
	printf("please input the twenty elements: \n");
	for (int i = 0; i < array_size; i++)
	{
		scanf("%d", array + i);
	}
	printf("The size of array is: %d\n", array_size);
	bubble_sort(array, array_size);
	printf("The array is sorted by bubble is: \n");
	for (int i = 0; i < array_size; i++)
	{
		printf("%-2d", array[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}