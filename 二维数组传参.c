/*
**	二维数组传参
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//void test(int arr[3][5])
//void test(int arr[][])	不行
//void test(int arr[][5])
//void test(int* arr)		不行
//void test(int* arr[5])	不行
//void test(int (*arr)[5])
//void test(int** arr)		不行
{

}

int main()
{
	int arr[3][5] = { 0 };
	test(arr);
	system("pause");
	return 0;
}