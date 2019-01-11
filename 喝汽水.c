/*
**	喝汽水, 1瓶1元, 两个空瓶换一瓶
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//喝汽水
int sodaDrink(int money)
{
	int total = 0;
	int empty = 0;
	total = money / 1;
	empty = money / 1;
	while (empty > 1)
	{
		total += empty / 2;
		empty = empty % 2 + empty / 2;
	}
	return total;
}

int main()
{
	int money = 0;
	int total = 0;
	printf("请输入金钱数: \n");
	scanf("%d", &money);
	total = sodaDrink(money);
	printf("%d元钱可以喝%d瓶苏打汽水!\n",
		money, total);
	system("pause");
	return 0;
}