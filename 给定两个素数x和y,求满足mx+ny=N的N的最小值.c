/*
**	给定两个素数x和y, 求满足mx + ny = N的N的最小值
**	并打印出满足条件的连续k个等式
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int x = 0;
	int y = 0;
	int N = 0;
	int i = 1;
	int k = 0;
	int m = 0;
	int n = 0;
	printf("请输入两个质数的值: \n");
	scanf("%d %d", &x, &y);
	/*---k取两素数中的最小值---*/
	k = x < y ? x : y;
	N = x + y;
	/*---从N开始能找到连续k个符合条件的自然数, 则N就是所求数---*/
	/*---N = mx + ny, 那么N + k = mx + ny + k, k为x或y---*/
	while (i <= k)
	{
		m = 0;
		/*---判断N是否等于mx + ny---*/
		do
		{
			m += x;
			n = N - m;
			if (n < y)
			{
				i = 0;
				break;
			}
		} while (n % y != 0);
		++N;
		++i;
	}
	printf("满足条件的最小自然数为: %d\n", N - k);
	printf("连续%d个满足条件的表达式如下: \n", k);
	/*---遍历连续K个值---*/
	for (i = N - k; i < N; ++i)
	{
		int temp = i;
		m = 0;
		/*---给定m, 利用(N - mx) / y来求n---*/
		while (temp % y != 0)
		{
			++m;
			temp -= x;
		}
		n = temp / y;
		printf("%-2d * %2d + %-2d * %2d = %2d\n", m, x, n, y, i);
	}
	system("pause");
	return 0;
}