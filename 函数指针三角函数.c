/*
**	ͨ���û�������,ʹ����ָ��ָ����Ӧ�ĺ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"

int main()
{
	char arr[20];
	double degree = 0;
	double (*f)(double);
	while (1)
	{
		printf("������sin, cos��tan: \n");
		gets(arr);
		/*---����sin,ָ��ָ��sin����---*/
		if (strcmp(arr, "sin") == 0)
		{
			f = sin;
			break;
		}
		/*---����cos,ָ��ָ��cos����---*/
		else if (strcmp(arr, "cos") == 0)
		{
			f = cos;
			break;
		}
		/*---����tan,ָ��ָ��tan����---*/
		else if (strcmp(arr, "tan") == 0)
		{
			f = tan;
			break;
		}
		/*---��������, ��������---*/
		else
		{
			printf("��������,����������!\n");
			continue;
		}
	}
	printf("���������(����):\n");
	scanf("%lf", &degree);
	printf("The result is: %f\n", (*f)(degree * 3.14 / 180));
	system("pause");
	return 0;
}