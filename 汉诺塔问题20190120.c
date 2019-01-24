/*
**	��ŵ������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

// ��ŵ��
void hanoi(int n, char a, char b, char c)
{
	// ֻ��һ������, ֱ���ƶ�
	if (n == 1)
	{
		printf("move %c to %c\n", a, c);
	}
	else
	{
		// ��n - 1�����Ӵ�a�Ƶ�b
		hanoi(n - 1, a, c, b);
		printf("move %c to %c\n", a, c);
		// ��n - 1�����Ӵ�b �Ƶ�c
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