/*
** ��д������ӡ����
*/

#include "stdio.h"
#include "stdlib.h"

/*---��ӡ����---*/
print_rhombus(int height)
{
	/*---�����Ǵ�ӡ---*/
	for (int i = 1; i <= height / 2 + 1; ++i)
	{
		for (int j = 1; j <= height / 2 + i; ++j)
		{
			if (j >= height / 2 - i + 2)
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
	/*---��ӡ������---*/
	for (int i = height / 2; i >= 1; --i)
	{
		for (int j = 1; j <= height / 2 + i; ++j)
		{
			if (j >= height / 2 - i + 2)
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
}

int main()
{
	print_rhombus(20);
	system("pause");
	return 0;
}