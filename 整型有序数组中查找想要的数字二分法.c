/*
** 2018_11_02
** bite_c_5_2
** �������������в�����Ҫ�����ֶ��ַ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int array[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17};
	int num = 0;
	int left = 0;
	int right = sizeof(array) / sizeof(array[0]);
	int mid = 0;
	printf("������Ҫ���ҵ�����: ");
	scanf("%d", &num);
	while (left <= right)
	{	
		mid = (left + right) / 2;
		if (num > array[mid])
		{
			left = mid + 1;
		}
		else if (num < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("��array�������ҵ������� %d,�±�Ϊ: %d.\n", num, mid);
			break;
		}
	}
	if (left > right)
	{
		printf("��array������δ�ҵ����� %d.\n", num);
	}
	system("pause");
	return 0;
}