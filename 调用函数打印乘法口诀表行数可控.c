/*
** 2018_11_03
** C����
** ���ú�����ӡ�˷��ھ�����ӡ�������ɿ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

void mutiplication_table_print(int row)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d��%2d =%2d  ", j, i, j * i);
		}
		printf("\n");
	}
}

int main()
{
	int row = 0;
	printf("������Ҫ��ӡ�ĳ˷��ھ��������: ");
	scanf("%d", &row);
	printf("�˷��ھ�������: \n");
	mutiplication_table_print(row);
	system("pause");
	return 0;
}