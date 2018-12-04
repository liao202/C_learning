/*
**	����ѹ������
**	����������ѹ���ɲ��ظ�����������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 10

/*---����---*/
void swap(int* p1, int* p2)
{
	int temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

/*---ð������---*/
void bubbleSort(int number[LEN])
{
	/*---����[0, bound]---*/
	for (int bound = 0; bound < LEN; ++bound)
	{
		for (int cur = LEN - 1; cur > bound; --cur)
		{
			if (number[cur] < number[cur - 1])
			{
				swap(&number[cur], &number[cur - 1]);
			}
		}
	}
}

int main()
{
	int index = 0;
	int number[LEN] = { 0, 1, 6, 3, 3, 4, 9, 5, 8, 8 };
	printf("ԭ��������: \n");
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-2d", number[i]);
	}
	bubbleSort(number);
	printf("��С��������֮��Ϊ: \n");
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-2d", number[i]);
	}
	/*---ɾ�������������ظ���Ԫ��---*/
	for (int i = 0; i < LEN; ++i)
	{
		if ((number[i] - number[i + 1]) != 0)
		{
			number[index++] = number[i];
		}
	}
	printf("ѹ��֮�������: \n");
	for (int i = 0; i < index; ++i)
	{
		printf("%-2d", number[i]);
	}
	system("pause");
	return 0;
}