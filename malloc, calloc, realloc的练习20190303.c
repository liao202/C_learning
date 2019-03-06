#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

int randomNumber()
{
	return 1 + rand() % (9 - 1 + 1);
}

void arrInit(int* arr, int len)
{
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		arr[i] = randomNumber();
	}
}

void arrDisplay(int* arr, int len)
{
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		printf("%-3d", arr[i]);
	}
	printf("\n");
}

int* twoSum(int* arr, int len, int sum)
{
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		int value = sum - arr[i];
		int j = 0;
		for (j = i + 1; j < len; ++j)
		{
			if (value == arr[j])
			{
				int* ret = (int*)malloc(sizeof(int) * 2);
				ret[0] = i;
				ret[1] = j;
				return ret;
			}
		}
	}
	return NULL;
}

int main()
{
	srand((unsigned int)time(0));
	int* arr = NULL;
	int len = 0;
	int sum = 0;
	int* result = NULL;
	printf("Please input the length of the array: \n");
	scanf("%d", &len);
	assert(len >= 0);
	arr = (int*)malloc(sizeof(int) * len);
	assert(arr != NULL);
	arrInit(arr, len);
	printf("The array is: \n");
	arrDisplay(arr, len);
	sum = randomNumber();
	printf("The sum: %d\n", sum);
	result = twoSum(arr, len, sum);
	if (result != NULL)
	{
		printf("The result is: \n");
		printf("[%d]: %d, [%d]: %d\n",
			result[0], arr[result[0]], result[1], arr[result[1]]);
	}
	else
	{
		printf("failed!\n");
	}
	free(arr);
	arr = NULL;
	free(result);
	result = NULL;
	system("pause");
	return 0;
}