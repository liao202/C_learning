#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int isPrimeNumber(int n)
{
	int i = 0;
	for (i = 2; i <= (int)sqrt(n); ++i)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int isLeapYear(int year)
{
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
	{
		return 1;
	}
	return 0;
}

void numberDisplay(int num)
{
	if (num > 9)
	{
		numberDisplay(num / 10);
	}
	printf("%d ", num % 10);
}

size_t myStrlen(const char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	return myStrlen(++str) + 1;
}

int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return n * factorial(n - 1);
}

//int fib(int n)
//{
//	if (n == 0)
//	{
//		return -1;
//	}
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//}

int fib(int n)
{
	if (n <= 0)
	{
		return n;
	}
	if (n == 1 || n == 2)
	{
		return 1;
	}
	int n_1 = 1;
	int n_2 = 1;
	int n_n = 0;
	int i = 0;
	for (i = 3; i <= n; ++i)
	{
		n_n = n_1 + n_2;
		n_2 = n_1;
		n_1 = n_n;
	}
	return n_n;
}

int main()
{
	int n = 0;
	printf("Please input n: \n");
	scanf("%d", &n);
	printf("%d\n", fib(n));

	//int n = 0;
	//printf("Please input n: \n");
	//scanf("%d", &n);
	//printf("%d\n", factorial(n));

	//char str[] = "hello, world!";
	//printf("%lu\n", myStrlen(str));

	//int num = 0;
	//printf("Please input the num: \n");
	//scanf("%d", &num);
	//numberDisplay(num);
	//printf("\n");

	//int num = 0;
	//printf("Please input num: \n");
	//scanf("%d", &num);
	//int flag1 = isPrimeNumber(num);
	//int flag2 = isLeapYear(num);
	//if (flag1)
	//{
	//	printf("%d is prime number!\n", num);
	//}
	//else
	//{
	//	printf("%d is not prime number!\n", num);
	//}
	//if (flag2)
	//{
	//	printf("%d is leap year!\n");
	//}
	//else
	//{
	//	printf("%d is not leap year!\n");
	//}

	//int num1 = 10;
	//int num2 = 20;
	//printf("The origin num: %d %d\n", num1, num2);
	//swap(&num1, &num2);
	//printf("The swaped num: %d %d\n", num1, num2);
	//char arr[10] = { 0 };
	//int i = 0;
	//memset(arr, 65, sizeof(char) * 10);
	//for (i = 0; i < 10; ++i)
	//{
	//	printf("%c  ", arr[i]);
	//}
	//printf("\n");
	system("pause");
	return 0;
}