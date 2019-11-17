/*
**	�Ƿ�Ϊ2����
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//2�����ж�
int isPowOfTwo(int n)
{
	if (n <= 0)
	{
		return 0;
	}
	if ((n & (n - 1)) == 0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int num = 0;
	int flag = 0;
	printf("������һ����: \n");
	scanf("%d", &num);
	flag = isPowOfTwo(num);
	if (flag == 1)
	{
		printf("��2����!\n");
	}
	else
	{
		printf("����2����!\n");
	}
	system("pause");
	return 0;
}