/*
**	��ӡ�������	
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int number = 1; 
	int height = 0;
	printf("������������ǵĸ߶�height: \n");
	scanf("%d", &height);
	/*---�����һ�е�1---*/
	printf("1\n");
	/*---�ӵڶ��е����һ��---*/
	for (int i = 2; i <= height; number = 1, ++i)
	{
		/*---ÿһ�еĵ�һ��1---*/
		printf("1    ");
		/*---�����ڶ���,�ӵ����п�ʼ---*/
		for (int j = 1; j <= i - 2; ++j)
		{
			number = (i - j) * number / j;
			printf("%-5d", number);
		}
		/*---���һ��1---*/
		printf("1\n");
	}
	system("pause");
	return 0;
}