/*
**	���������е�Ԫ��,ʹ����ȫ����ǰ��,ż��ȫ���ں���
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 11

int arr_new[LEN] = { 0 };

/*---�����ӡ����---*/
void arr_display(int arr[])
{
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-3d", arr[i]);
	}
	printf("\n");
}

/*---�����������---*/
void modi_arr(int arr[])
{
	int odd_count = 0;
	for (int i = 0; i < LEN; ++i)
	{
		/*---������д���������е�ǰ��---*/
		if (arr[i] % 2 == 1)
		{
			arr_new[odd_count] = arr[i];
			++odd_count;
		}
	}
	int even_count = odd_count;
	for (int i = 0; i < LEN; ++i)
	{
		/*---��ż��д���������еĺ���---*/
		if (arr[i] % 2 == 0)
		{
			arr_new[even_count] = arr[i];
			++even_count;
		}
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	printf("����ǰ����������: \n");
	arr_display(arr);
	modi_arr(arr);
	printf("���������������: \n");
	arr_display(arr_new);
	system("pause");
	return 0;
}