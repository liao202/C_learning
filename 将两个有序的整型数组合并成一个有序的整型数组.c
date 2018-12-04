/*
**	�������������������
**	�ϲ���һ���������������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 20

/*---�������������������ϲ���һ����������---*/
void merge(int arr1[], int len1, int arr2[], int len2, int* arr)
{
	int i = 0; 
	int j = 0;
	/*---���������������е�Ԫ�ط����µ�����---*/
	for (i = 0, j = 0; i < len1 && j < len2;)
	{
		if (arr1[i] < arr2[j])
		{
			*arr++ = arr1[i++];
		}
		else
		{
			*arr++ = arr2[j++];
		}
	}
	/*---��arr1��û����---*/
	while (i < len1)
	{
		*arr++ = arr1[i++];
	}
	/*---��arr2��û����---*/
	while (j < len2)
	{
		*arr++ = arr2[j++];
	}
}

int main()
{
	int arr1[] = { 1, 3, 5, 9, 11, 15 };
	int arr2[] = { 2, 4, 6, 10, 18, 22, 25, 28 };
	int arr[LEN] = { 0 };
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	/*---����1��ӡ---*/
	printf("����1����������: \n");
	for (int i = 0; i < len1; ++i)
	{
		printf("%-3d", arr1[i]);
	}
	/*---����2��ӡ---*/
	printf("\n����2����������: \n");
	for (int i = 0; i < len2; ++i)
	{
		printf("%-3d", arr2[i]);
	}
	printf("\n");
	merge(arr1, len1, arr2, len2, arr);
	printf("�ϲ��������Ϊ: \n");
	for (int i = 0; i < len1 + len2; ++i)
	{
		printf("%-3d", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}