/*
**	�������������е�����Ԫ��ת��Ϊ�������������ż��
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
	int arr[] = {2, 4, 7, 9, 11, 12, 15};
	printf("�޸�ǰ������: \n");
	arr_display(arr);
	for (int i = 0; i < LEN; ++i)
	{
		arr[i] &= (~1);
	}
	printf("�޸ĺ������: \n");
	arr_display(arr);
	system("pause");
	return 0;
}