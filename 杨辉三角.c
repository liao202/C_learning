/*
**	打印杨辉三角	
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int number = 1; 
	int height = 0;
	printf("请输入杨辉三角的高度height: \n");
	scanf("%d", &height);
	/*---输出第一行的1---*/
	printf("1\n");
	/*---从第二行到最后一行---*/
	for (int i = 2; i <= height; number = 1, ++i)
	{
		/*---每一行的第一个1---*/
		printf("1    ");
		/*---跳过第二行,从第三行开始---*/
		for (int j = 1; j <= i - 2; ++j)
		{
			number = (i - j) * number / j;
			printf("%-5d", number);
		}
		/*---最后一个1---*/
		printf("1\n");
	}
	system("pause");
	return 0;
}