/*
**	������������x��y, ������mx + ny = N��N����Сֵ
**	����ӡ����������������k����ʽ
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
	printf("����������������ֵ: \n");
	scanf("%d %d", &x, &y);
	/*---kȡ�������е���Сֵ---*/
	k = x < y ? x : y;
	N = x + y;
	/*---��N��ʼ���ҵ�����k��������������Ȼ��, ��N����������---*/
	/*---N = mx + ny, ��ôN + k = mx + ny + k, kΪx��y---*/
	while (i <= k)
	{
		m = 0;
		/*---�ж�N�Ƿ����mx + ny---*/
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
	printf("������������С��Ȼ��Ϊ: %d\n", N - k);
	printf("����%d�����������ı��ʽ����: \n", k);
	/*---��������K��ֵ---*/
	for (i = N - k; i < N; ++i)
	{
		int temp = i;
		m = 0;
		/*---����m, ����(N - mx) / y����n---*/
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