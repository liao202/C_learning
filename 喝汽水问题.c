/*
**	喝汽水问题
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//喝汽水
int sodaDrink(int money)
{
	int total = 0;
	int empty = 0;
	//汽水单价1元
	total = money / 1;
	empty = total;
	while (empty > 1)
	{
		//两个空瓶可以换一瓶饮料
		total += empty / 2;
		empty = empty % 2 + empty / 2;
	}
	return total;
}

int main()
{
	int money = 0;
	int bottle = 0;
	printf("请输入钱数: \n");
	scanf("%d", &money);
	bottle = sodaDrink(money);
	printf("%d元可以和%d瓶汽水!\n",
		 money, bottle);
	system("pause");
	return 0;
}