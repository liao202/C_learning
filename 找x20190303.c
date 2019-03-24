#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

int randomNumber()
{
	return 1 + rand() % (100 - 1 + 1);
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
		printf("%d  ", arr[i]);
	}
	printf("\n");
}

void findX(int* arr, int len, int x)
{
	int i = 0;
	for (i = 0; i < len; ++i)
	{
		if (arr[i] == x)
		{
			printf("find successful!\n");
			return;
		}
	}
	printf("find failed!\n");
}

int main()
{
	srand((unsigned int)time(0));
	int n = 0;
	int* arr = NULL;
	int x = randomNumber();
	printf("Please input n: \n");
	assert(n >= 0);
	arr = (int*)malloc(sizeof(int) * n);
	assert(arr != NULL);
	arrInit(arr, n);
	printf("The array is: \n");
	arrDisplay(arr, n);
	printf("x: %d\n", x);
	findX(arr, n, x);
	free(arr);
	arr = NULL;
	system("pause");
	return 0;
}