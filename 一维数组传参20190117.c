/*
**	一维数组传参
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//void test(int arr[])
//void test(int arr[10])
void test(int* arr)
{
	
}

//void test2(int* arr[])
//void test2(int* arr[])
void test2(int** arr)
{

}

int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);
	system("pause");
	return 0;
}