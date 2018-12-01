/*
**	�������n! / (m! * (n - m)!), ���m��n�����ֹ���,�׳˲�����
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 100

/*---���Լ��---*/
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
	printf("������n��m: \n");
	scanf("%d %d", &n, &m);
	/*---������n, n - 1, ...n - m + 1��������n_arr---*/
	for (int i = 0, value = n; i < n - m + 1; --value, ++i)
	{
		n_arr[i] = value;
	}
	/*---������1, 2, 3, ...m��������m_arr---*/
	for (int i = 0; i < m; ++i)
	{
		m_arr[i] = i + 1;
	}
	/*---��n_arr����ĸ�Ԫ����, ȥ��m_arr����������������---*/
	for (int i = 0; i < m; ++i)
	{
		if (n_arr[i] != 1)
		{
			for (int j = 0; j < m; ++j)
			{
				if (m_arr[j] > 1)
				{
					/*---�������Լ������Լ��---*/
					temp = gcd(n_arr[i], m_arr[j]);
					n_arr[i] /= temp;
					m_arr[j] /= temp;
				}
			}
		}
	}
	/*---�۳���n_arr�е�����Ԫ��, �õ����---*/
	temp = 1;
	for (int i = 0; i < m; ++i)
	{
		temp *= n_arr[i];
	}
	printf("%d��%d�������Ϊ: %d\n", n, m, temp);
	system("pause");
	return 0;
}