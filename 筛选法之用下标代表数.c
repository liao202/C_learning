/*
**	ɸѡ��֮���±������
**	�±��Ӧ����������Ϊ�жϱ�־
**	2~100
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define N 100

int main()
{
	int arr[N] = { 0 };
	//����Ԫ��ȫ����ʼ��Ϊ1
	for (int i = 1; i < N; ++i)
	{
		arr[i] = 1;
	}
	//ɸѡ����
	for (int i = 1; i < N; ++i)
	{
		if (arr[i] == 0)
		{
			continue;
		}
		for (int j = i + 1; j < N + 1; ++j)
		{
			if ((j + 1) % (i + 1) == 0)
			{
				arr[j] = 0;
			}
		}
	}
	//�����ӡ
	for (int i = 1, j = 0; i < N; ++i)
	{
		if (arr[i] != 0)
		{
			++j;
			printf("%-4d", i + 1);
			if (j % 5 == 0)
			{
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
}