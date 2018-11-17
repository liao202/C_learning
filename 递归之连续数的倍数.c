/*
**	输入n和m,依次输出n的m倍,n-1的m倍,...直到1的m倍
**	使用递归调用
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

void number_multiple(int number, int multiple)
{
	if (multiple)
	{
		printf("%-3d", number * multiple);
		number_multiple(number, --multiple);
	}
}

int main()
{
	int number = 0;
	int multiple = 0;
	printf("please input the number and multiple:\n");
	scanf("%d %d", &number, &multiple);
	number_multiple(number, multiple);
	system("pause");
	return 0;
}