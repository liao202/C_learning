/*
**	10��С��Χ��һȦ���ǹ���
**	��һ��С��10�飬�ڶ���С��2�飬������С��8�飬 ���ĸ�С��22�飬�����С��16��
**	������С��4�飬���߸�С��10�飬�ڰ˸�С��6�飬�ھŸ�С��14�飬��ʮ��С��20��
**	�����·������е���
**	����С������Լ�������ǹ���������Ϊ������������ʦҪһ�飬Ȼ���һ�����һ��С��
**	��ʹ��С�����е��ǹ�����ͬ����Ҫ�������ٴΣ�ÿ��С�������ж��ٿ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---���ÿ��С�������е��ǹ��Ƿ����---*/
int check_sugar_equal(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (array[0] != array[i])
		{
			return 1;
		}
	}
	return 0;
}

/*---���ÿ�ε�����ĵ���������ÿ��С�����ǹ���---*/
void print_sugar(int frequence, int size, int* array)
{
	printf("��������Ϊ: %-2d\n", frequence);
	printf("���ε�����ÿ��С��������ǹ�����: \n");
	for (int i = 0; i < size; i++)
	{
		printf("%-3d", array[i]);
	}
	printf("\n\n");
}

int main()
{
	int sugar_for_child[] = { 10, 2, 8, 22, 16, 4, 10, 6, 14, 20 };
	int size = sizeof(sugar_for_child) / sizeof(sugar_for_child[0]);
	int frequence = 0;
	int temp[10];
	/*---���ÿ��С���ǹ����Ƿ���ͬ����ͬ����1����ͬ����0---*/
	while (check_sugar_equal(sugar_for_child, size))
	{
		/*---ÿ��С�����ǹ��ֳ�һ��---*/
		for (int i = 0; i < 10; i++)
		{
			if (sugar_for_child[i] % 2 == 0)
			{
				temp[i] = sugar_for_child[i] / 2;
			}
			else
			{
				temp[i] = (sugar_for_child[i] + 1) / 2;
			}
		}
		/*---���ֳ����ǹ�����һ��С��---*/
		for (int i = 0; i < 9; i++)
		{
			sugar_for_child[i + 1] = temp[i] + temp[i + 1];
 		}
		/*---���һ��С����һ�����һ��С��---*/
		sugar_for_child[0] = temp[9] + temp[0];
		frequence++;
		print_sugar(frequence, size, sugar_for_child);
	}
	system("pause");
	return 0;
}