/*
**	汉诺塔问题
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

// 汉诺塔
void hanoi(int n, char a, char b, char c)
{
	// 只有一个盘子, 直接移动
	if (n == 1)
	{
		printf("move %c to %c\n", a, c);
	}
	else
	{
		// 将n - 1个盘子从a移到b
		hanoi(n - 1, a, c, b);
		printf("move %c to %c\n", a, c);
		// 将n - 1个盘子从b 移到c
		hanoi(n - 1, b, a, c);
	}
}

int main()
{
	int n = 0;
	char A = '1', B = '2', C = '3';

	printf("Enter the number of disks: \n");
	scanf("%d", &n);
	printf("The solution for n = %d: \n", n);
	hanoi(n, A, B, C);
	system("pause");
	return 0;
}