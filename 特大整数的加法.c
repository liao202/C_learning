/*
**	�ش������ļӷ�,ʹ������ʵ��
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 20

int main()
{
	int number_1[LEN] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
					1, 0, 1, 1, 1, 2, 1, 3, 1, 4 };
	int number_2[LEN] = {9, 9, 9, 9, 9, 1, 6, 7, 8, 9,
		1, 0, 1, 1, 1, 2, 1, 3, 1, 4 };
	int result[LEN + 1] = { 0 };
	int index = 0;
	/*---��ӡ��һ����---*/
	printf(" ");
	for (int i = LEN - 1; i >= 0; --i)
	{
		printf("%d", number_1[i]);
	}
	printf("\n                    +\n");
	/*---��ӡ�ڶ�����---*/
	printf(" ");
	for (int i = LEN - 1; i >= 0; --i)
	{
		printf("%d", number_2[i]);
	}
	/*---�������---*/
	while (index < LEN)
	{
		result[index] += (number_1[index] + number_2[index]) % 10;
		/*---����֮�ʹ��ڻ����10, ��λ---*/
		if (number_1[index] + number_2[index] >= 10)
		{
			result[index + 1] += 1;
		}
		++index;
	}
	/*---�����ӡ---*/
	printf("\n                    =\n");
	for (int i = LEN; i >= 0; --i)
	{
		printf("%d", result[i]);
	}
	printf("\n");
	printf("\n");
	system("pause");
	return 0;
}