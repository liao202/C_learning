/*
**	����n��m,�������n��m��,n-1��m��,...ֱ��1��m��
**	ʹ�õݹ����
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