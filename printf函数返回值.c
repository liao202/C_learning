/*
**	printf��������ֵ
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*
	��ӡ���
	4321
	printf��������ֵ������
	����printf("%d", n);��ӡ����n
	���, ��ӡ����printf�ķ���ֵ2
	����ӡ��һ�е�printf�ķ���ֵ1
*/
int main()
{
	int n = 43;
	printf("%d\n", printf("%d", printf("%d", n)));
	system("pause");
	return 0;
}