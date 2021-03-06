#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 5

void arrDisplay(int arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		printf("%-3d", arr[i]);
	}
	printf("\n");
}

void* myMemcpy(void* dest, const void* src, int num)
{
	assert(dest != NULL);
	assert(src != NULL);
	assert(num >= 0);
	char* temp_dest = (char*)dest;
	char* temp_src = (char*)src;

	for (int i = 0; i < num; ++i)
	{
		temp_dest[i] = temp_src[i];
	}

	return dest;
}

int main()
{
	int arr1[N] = {
		1, 2, 3, 4, 5
	};
	int arr2[N] = { 0 };

	printf("The origin arr1: ");
	arrDisplay(arr1, N);
	printf("The origin arr2: ");
	arrDisplay(arr2, N);
	myMemcpy(arr2, arr1, sizeof(int) * N);
	printf("arr1: ");
	arrDisplay(arr1, N);
	printf("arr1: ");
	arrDisplay(arr2, N);

	system("pause");
	return 0;
}