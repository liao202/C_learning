/*
** bite_c_4_1
** 2018_10_31
** ����߶�Ϊ13������ͼ��
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int i = 0;
	int j = 0;
	int rhombus_height = 13;
	printf("����ͼ������: \n");
	// ��ӡ������
	for (i = 1; i <= rhombus_height / 2 + 1; i++)
	{
		for (j = 1; j <= rhombus_height / 2 + i; j++)
		{
			if (j >= rhombus_height / 2 - i + 2)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	// ��ӡ������
	for (i = rhombus_height / 2; i >= 1; i--)
	{
		for (j = 1; j <= rhombus_height / 2 + i; j++)
		{
			if (j >= rhombus_height / 2 - i + 2)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}