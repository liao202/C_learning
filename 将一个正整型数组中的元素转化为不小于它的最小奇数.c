/*
**	��һ�������������е�Ԫ��ת��Ϊ��С��������С����
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 7

/*---�����ӡ---*/
void arr_display(int arr[])
{
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-3d", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1, 2, 4, 5, 9, 15, 18 };
	printf("ת��ǰ������: \n");
	arr_display(arr);
	for (int i = 0; i < LEN; ++i)
	{
		arr[i] |= 1;
	}
	printf("ת���������: \n");
	arr_display(arr);
	system("pause");
	return 0;
}