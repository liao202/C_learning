/*
**	�ҳ�����Ԫ�ص�ֵ, ����Ԫ�ض��ǳɶԳ��ֵ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 9

int main()
{
	int arr[LEN] = { 1, 2, 3, 4, 5, 
		4, 3, 2, 1 };
	int result = arr[0];
	for (int i = 1; i < LEN; ++i)
	{
		result = result ^ arr[i];
	}
	//�����ӡ
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-3d", arr[i]);
	}
	printf("\n�����: %d\n", result);
	system("pause");
	return 0;
}