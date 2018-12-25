/*
**	��Ʊ�������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 10

/*---�����ӡ��������---*/
void arrDisplay(int arr[])
{
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-4d", arr[i]);
	}
	printf("\n");
}

/*---����������---*/
int maxProfit(int prices[])
{
	int max_profit = 0;
	int min_profit = INT_MAX;
	for (int i = 0; i < LEN; ++i)
	{
		min_profit = min(min_profit, prices[i]);
		max_profit = max(max_profit, prices[i] - min_profit);
	}
	return max_profit;
}

int main()
{
	srand((unsigned int)time(0));
	int max_profit = 0;
	int prices[LEN] = { 0 };
	for (int i = 0; i < LEN; ++i)
	{
		//�������Χ[5, 13]
		prices[i] = 5 + rand() % (13 - 5 + 1);
	}
	printf("����10��Ĺ�Ʊ�۸��ӡ����: \n");
	arrDisplay(prices);
	max_profit = maxProfit(prices);
	printf("�������Ϊ: %d\n", max_profit);
	system("pause");
	return 0;
}