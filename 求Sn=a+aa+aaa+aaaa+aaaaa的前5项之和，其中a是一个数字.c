/*
** bite_c_4_3
** 2018_10_31
** 求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和其中a是一个数字
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main()
{
	int i = 0;
	int j = 0;
	int Sn = 0;
	int a = 0;
	printf("请输入0~9之间的整数a: \n");
	scanf("%d", &a);
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			Sn = Sn + a * pow(10, j);
		}
	}
	printf("Sn = a + aa + aaa + aaaa + aaaaa = %d\n", Sn);
	system("pause");
	return 0;
}