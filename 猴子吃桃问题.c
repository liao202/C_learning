/*
** ���ӳ�������
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int day = 9;
	/*---ǰһ���������---*/
	int x1 = 0;
	/*---�ڶ����������---*/
	int x2 = 1;
	while (day > 0)
	{
		x1 = (x2 + 1) * 2;
		x2 = x1;
		day--;
	}
	printf("��һ��һ��ժ��%d������\n", x2);
	system("pause");
	return 0;
}