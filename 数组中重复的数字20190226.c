#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int randomNumber()
{
	return 0 + rand() % (9 - 0 + 1);
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
}

int duplicateNumber(int arr[], int len)
{
	int i = 0;
	int j = 0;
	int value = 0;
	for (i = 0; i < len; ++i)
	{
		value = arr[0];
		for (j = i + 1; j < len; ++j)
		{
			if (value == arr[j])
			{
				return value;
			}
		}
	}
	return -1;
}

int main()
{
	srand((unsigned int)time(0));
	int arr[N] = { 0 };
	int duplicate_number = 0;
	arrInit(arr, N);
	printf("The array is: \n");
	arrDisplay(arr, N);
	duplicate_number = duplicateNumber(arr, N);
	printf("The duplicate number is: %d\n", duplicate_number);
	system("pause");
	return 0;
}