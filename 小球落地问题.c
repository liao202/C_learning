/*
** С���������
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	/*---����������---*/
	double sum = 100;
	/*---�����ĸ߶�---*/
	double h = 100;
	/*---��ش���---*/
	int n = 0;
	for (n = 2; n < 10; ++n)
	{
		sum += h * 2;
		h /= 2;
	}
	printf("������%f��\n��10�����ʱ�����ĸ߶�Ϊ%f\n", sum, h);
	system("pause");
	return 0;
}