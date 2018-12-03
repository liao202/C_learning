/*
**	猴子分桃问题, 第一只猴子将桃分为5份, 多了一个, 该猴子把多的一个吃掉了
**	拿走了其中一份, 后面四只猴子一次如此, 问海滩上原来最少有多少个桃子
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int peach_count = 0;
	int count = 0;
	int temp = 0;
	/*---每次剩余的桃子个数必须为4的倍数---*/
	for (int i = 4; ; i += 4)
	{
		count = 0;
		peach_count = i;
		/*---根据剩余的桃子个数计算原来桃子数---*/
		for (int j = 0; j < 5; ++j)
		{
			temp = peach_count / 4 * 5 + 1;
			peach_count = temp;
			if (peach_count % 4 == 0)
			{
				++count;
			}
			/*---某次剩余的桃子不能被4整除, 说明桃子原来不是i个---*/
			else
			{
				break;
			}
		}
		/*---够五个猴子分---*/
		if (count == 4)
		{
			printf("海滩上原来最少有%d个苹果!\n", peach_count);
			break;
		}
	}
	system("pause");
	return 0;
}