/*
**	����һ����,�ж��Ƿ��ǻ�����
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---�ж��Ƿ������---*/
int palindrome_number_check(int number)
{
	int original_number = number;
	int reverse_number = 0;
	while (number != 0)
	{
		reverse_number = reverse_number * 10 + (number % 10);
		number /= 10;
	}
	if (reverse_number == original_number)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int number = 0;
	int flag = 0;
	printf("please input a number: \n");
	scanf("%d", &number);
	flag = palindrome_number_check(number);
	if (flag)
	{
		printf("%d is palindrome number.\n", number);
	}
	else
	{
		printf("%d is not palindrome number.\n", number);
	}
	system("pause");
	return 0;
}