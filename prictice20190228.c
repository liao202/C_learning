#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union UN
{
	char ch;
	int i;
};

typedef union UN UN;

//int isLittleEnd1()
//{
//	int a = 11;
//	char* p = &a;
//	if (*p == 11)
//	{
//		return 1;
//	}
//	return 0;
//}

int isLittleEnd2()
{
	UN un;
	un.i = 1;
	if (un.ch == 1)
	{
		return 1;
	}
	return 0;
}

void arrDisplay1(int arr[][5], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; ++i)
	{
		int j = 0;
		for (j = 0; j < col; ++j)
		{
			printf("%-4d", arr[i][j]);
		}
		printf("\n");
	}
}

void arrDisplay2(int (*arr)[5], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; ++i)
	{
		int j = 0;
		for (j = 0; j < col; ++j)
		{
			printf("%-5d", arr[i][j]);
		}
		printf("\n");
	}
}

//void test(int arr[])
//{
//
//}

void test2(int* arr[20])
{

}

//void arrDisplay(int** arr, int row, int col)
//{
//}

void test()
{
	printf("hehe\n");
}

int main()
{
	(   *(    void(*)()     )    0   )           ();

	//typedef void(*TestFunc)();
	//TestFunc t1 = &test;
	//printf("test: %p\n", test);
	//printf("&test: %p\n", &test);

	//printf("%p\n", test);
	//printf("%p\n", &test);
		
	//int arr[2][2] = {
	//	1, 2, 3, 4
	//};
	//arrDisplay(arr, 2, 2);

	//typedef int(*T[10]);
	//T a[5];
	//(void*)a;
	
	//int arr[10] = { 0 };
	//int* arr2[20] = { 0 };
	//test(arr);
	//test2(arr2);

	//int arr[3][5] = {
	//	1, 2, 3, 4, 5, 6, 7, 8, 9, 10
	//};
	//arrDisplay1(arr, 3, 5);
	//arrDisplay2(arr, 3, 5);

	//int arr[10] = {
	//	1, 2, 3, 4, 5, 6, 7, 8, 9, 0
	//};
	//int (*p)[10] = &arr;

	//int arr[10] = { 0 };
	//printf("%p\n", arr);
	//printf("%p\n", &arr);

	//printf("arr + 1 = %p\n", arr + 1);
	//printf("&arr + 1 = %p\n", &arr + 1);

	//char str1[] = "hello, world!";
	//char str2[] = "hello, world!";
	//char* str3 = "hello, world!";
	//char* str4 = "hello, world!";

	//if (str1 == str2)
	//{
	//	printf("str1 and str2 are same!\n");
	//}
	//else
	//{
	//	printf("str1 and str2 are not same1\n");
	//}
	//if (str3 == str4)
	//{
	//	printf("str3 and str4 are same!\n");
	//}
	//else
	//{
	//	printf("str3 and str4 are not same!\n");
	//}
	
	//int n = 9;
	//float* ptr_float = (float*)&n;
	//printf("n: %d\n", n);
	//printf("*ptr_float: %f\n", *ptr_float);

	//*ptr_float = 9.0;
	//printf("n: %d\n", n);
	//printf("*ptr_float: %f\n", *ptr_float);

	//unsigned char i = 0;
	//for (i = 255; i >= 0; --i)
	//{
	//	printf("hello world!\n");
	//}

	//short num = 32768;
	//short int a = num + 1;
	//printf("%d\n", a);

	//char a[1000];
	//int i;
	//for (i = 0; i < 1000; ++i)
	//{
	//	a[i] = -1 - i;
	//}
	//printf("%d\n", strlen(a));

	//printf("char: %d\n", sizeof(char));
	//printf("short: %d\n", sizeof(short));
	//printf("int: %d\n", sizeof(int));
	//printf("long: %d\n", sizeof(long));
	//printf("long long: %d\n", sizeof(long long));
	//printf("float: %d\n", sizeof(float));
	//printf("double: %d\n", sizeof(double));
	//printf("little end: %d\n", isLittleEnd1());
	//printf("little end: %d\n", isLittleEnd2());
	//char a = -1;
	//signed char b = -1;
	//unsigned char c = -1;
	//printf("a = %d, b = %d, c = %d\n",
	//	a, b, c);
	//char a = 128;
	//printf("%u\n", a);
	//int i = -20;
	//unsigned int j = 10;
	//printf("%d\n", i + j);
	//unsigned int i;
	//for (i = 9; i >= 0; --i)
	//{
	//	printf("%u\n", i);
	//}
	system("pause");
	return 0;
}