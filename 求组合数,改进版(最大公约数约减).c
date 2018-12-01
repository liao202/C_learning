/*
**	求组合数n! / (m! * (n - m)!), 如果m和n的数字过大,阶乘不好求
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 100

/*---最大公约数---*/
int gcd(int n1, int n2)
{
	int ret = 1;
	for (int i = min(n1, n2); i >= 1; --i)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			ret = i;
			break;
		}
	}
	return ret;
}

int main()
{
	int m = 0; 
	int n = 0;
	int n_arr[LEN] = { 0 };
	int m_arr[LEN] = { 0 };
	int temp = 0;
	printf("请输入n和m: \n");
	scanf("%d %d", &n, &m);
	/*---将整数n, n - 1, ...n - m + 1存入数组n_arr---*/
	for (int i = 0, value = n; i < n - m + 1; --value, ++i)
	{
		n_arr[i] = value;
	}
	/*---将整数1, 2, 3, ...m存入数组m_arr---*/
	for (int i = 0; i < m; ++i)
	{
		m_arr[i] = i + 1;
	}
	/*---从n_arr数组的各元素中, 去掉m_arr中整数的所有因子---*/
	for (int i = 0; i < m; ++i)
	{
		if (n_arr[i] != 1)
		{
			for (int j = 0; j < m; ++j)
			{
				if (m_arr[j] > 1)
				{
					/*---利用最大公约数进行约减---*/
					temp = gcd(n_arr[i], m_arr[j]);
					n_arr[i] /= temp;
					m_arr[j] /= temp;
				}
			}
		}
	}
	/*---累乘新n_arr中的所有元素, 得到结果---*/
	temp = 1;
	for (int i = 0; i < m; ++i)
	{
		temp *= n_arr[i];
	}
	printf("%d和%d的组合数为: %d\n", n, m, temp);
	system("pause");
	return 0;
}