/*
**	�����������ĺ�, ��ʹ��+-
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

//��������֮��
int add(int n1, int n2)
{
	int temp = 0;
	while (n2 != 0)
	{
		//����λ�ĺ�
		temp = n1 ^ n2;
		//��λ
		n2 = (n1 & n2) << 1;
		n1 = temp;
	}
	return n1;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("��������������: \n");
	scanf("%d %d", &num1, &num2);
	printf("����֮��Ϊ: %d\n", add(num1, num2));
	system("pause");
	return 0;
}