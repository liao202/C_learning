/*
**	��ʹ��(a + b) / 2����������ƽ��ֵ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int number1 = 10;
	int number2 = 20;
	int average_number = 0;
	/*
	**	����һ: �ô�����ȥС����,
	**	��С������������֮���һ��
	*/
	average_number = (number2 - number1) / 2 + number1;
	/*
	**	������: �����Ķ�������ͬ����
	**	��λ��,��ͬ�������,������
	*/
	average_number = (number1 & number2) + ((number1 ^ number2) >> 1);
	printf("%d\n", average_number);
	system("pause");
	return 0;
}