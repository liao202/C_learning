#include "stdio.h"
#include "stdlib.h"

void array_print(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%2d ", arr[i]);
	}
	printf("\n");
}

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int* arr, int size)
{
	int bound = 0;
	for (; bound < size; ++bound)
	{
		int cur = size - 1;
		for (; cur > bound; --cur)
		{
			if (arr[cur] > arr[cur - 1])
			{
				swap(&arr[cur], &arr[cur - 1]);
			}
		}
	}
}

int main()
{
	int arr[] = { 9, 3, 1, 10, 6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	array_print(arr, size);
	bubble_sort(arr, size);
	array_print(arr, size);
	system("pause");
	return 0;
}