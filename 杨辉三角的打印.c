/*
**	��Ļ�ϴ�ӡ�������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 10

int main()
{
	int arr[LEN][LEN] = { 0 };
	//ǰ����ȫΪ1
	for (int i = 0; i < LEN; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			arr[i][j] = 1;
		}
	}
	//��������, ÿ��Ԫ�ص���������������֮��
	//arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1]
	for (int i = 2; i < LEN; ++i)
	{
		for (int j = 1; j < i; ++j)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	//�����ӡ
	printf("������Ǵ�ӡ����: \n");
	for (int i = 0; i < LEN; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			printf("%-6d", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}