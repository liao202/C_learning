/*
**	通过键盘输入20个数字，并将它们从小到大输出
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

/*---冒泡排序---*/
void bubble_sort(int* array, int size)
{
	/*---[0, bound]存放已序部分---*/
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