/*
**	������ת��
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define N 4

/*---�����ӡ---*/
void array_print(int(*arr)[N])
{
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			printf("%-2d", *(*(arr + i) + j));
		}
		printf("\n");
	}
}

/*---�����ת��---*/
void transposition(int(*arr)[N])
{
	for (int i = 0; i < N; ++i)
	{
		for (int j = i; j < N; ++j)
		{
			int temp;
			temp = *(*(arr + i) + j);
			*(*(arr + i) + j) = *(*(arr + j) + i);
			*(*(arr + j) + i) = temp;
		}
	}
}

int main()
{
	int arr[N][N] = { { 1, 9, 3, 5 }, { 8, 3, 6, 1 },
	{ 3, 4, 0, 2 }, { 4, 1, 2, 3 } };
	printf("ת��ǰ����������:\n");
	array_print(arr);
	transposition(arr);
	printf("ת�ú����������:\n");
	array_print(arr);
	system("pause");
	return 0;
}
