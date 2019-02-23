#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

#define N 20

int randomNumber()
{
	return 11 + rand() % (99 - 11 + 1);
}

void arrInit(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		arr[i] = randomNumber();
	}
}

void arrDisplay(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		printf("%-5d", arr[i]);
	}
	printf("\n");
}

void* myMemcpy(void* dest, const void* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	size_t i = 0;
	char* temp_dest = (char*)dest;
	const char* temp_src = (char*)src;
	for (i = 0; i < num; ++i)
	{
		*temp_dest = *temp_src;
		++temp_dest;
		++temp_src;
	}
	return dest;
}

int main()
{
	int arr1[N] = { 0 };
	int arr2[N] = { 0 };
	arrInit(arr1, N);
	printf("The origin array1 is: \n");
	arrDisplay(arr1, N);
	printf("The origin array2 is: \n");
	arrDisplay(arr2, N);
	myMemcpy(arr2, arr1, sizeof(int) * N);
	printf("The array1 is: \n");
	arrDisplay(arr1, N);
	printf("The array2 is: \n");
	arrDisplay(arr2, N);
	system("pause");
	return 0;
}