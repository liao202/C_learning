/*
**	��������������ϲ���һ���������� 	
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define M 6
#define N 3

/*---�����ӡ����---*/
void arrDisplay(int arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		printf("%-2d", arr[i]);
	}
	printf("\n");
}

/*---�ϲ�����---*/
void merge(int arr1[], int m, int arr2[], int n)
{
	int p = m-- + n-- - 1;
	while (m >= 0 && n >= 0)
	{
		arr1[p--] = arr1[m] > arr2[n] ? arr1[m--] : arr2[n--];
	}
	while (n >= 0)
	{
		arr1[p--] = arr2[n--];
	}
}

int main()
{
	int nums1[M] = { 1, 2, 3, 0, 0, 0 };
	int nums2[N] = { 2, 5, 6 };
	printf("����1��ӡ����: \n");
	arrDisplay(nums1, M - N);
	printf("����2��ӡ����: \n");
	arrDisplay(nums2, N);
	merge(nums1, M - N, nums2, N);
	printf("�ϲ���������ӡ����: \n");
	arrDisplay(nums1, M);
	system("pause");
	return 0;
}