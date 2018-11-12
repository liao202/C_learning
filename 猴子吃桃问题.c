/*
** 猴子吃桃问题
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int day = 9;
	/*---前一天的桃子数---*/
	int x1 = 0;
	/*---第二天的桃子数---*/
	int x2 = 1;
	while (day > 0)
	{
		x1 = (x2 + 1) * 2;
		x2 = x1;
		day--;
	}
	printf("第一天一共摘了%d个桃子\n", x2);
	system("pause");
	return 0;
}