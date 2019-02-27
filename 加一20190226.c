#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

int randomNumber()
{
	return 8 + rand() % (9 - 8 + 1);
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
		printf("%d", arr[i]);
	}
	printf("\n");
}

int* plusOne(int* digits, int num, int* size)
{
	int i = 0;
	*size = num;
	int flag = 1;
	for (i = num - 1; i >= 0; --i)
	{
		digits[i] = digits[i] + flag;
		flag = 0;
		if (digits[i] == 10)
		{
			digits[i] = 0;
			flag = 1;
			if (i == 0)
			{
				digits = (int*)realloc(digits, sizeof(int) * (num + 1));
				for (i = num; i > 0; --i)
				{
					digits[i] = digits[i - 1];
				}
				digits[0] = 1;
				++(*size);
			}
		}
	}
	return digits;
}

int main()
{
	srand((unsigned int)time(0));
	int* digits = NULL;
	int num = 0;
	int size = 0;
	printf("Please input the num of digits: \n");
	scanf("%d", &num);
	assert(num >= 0);
	digits = (int*)malloc(sizeof(int) * num);
	assert(digits != NULL);
	arrInit(digits, num);
	printf("The origin digits is: ");
	arrDisplay(digits, num);
	digits = plusOne(digits, num, &size);
	printf("The digits after plus one is: ");
	arrDisplay(digits, size);
	free(digits);
	digits = NULL;
	system("pause");
	return 0;
}