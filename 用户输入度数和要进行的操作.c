/*
**	����Ҫ���еĲ����Ͷ���,�����Ӧ�Ľ��
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	char ch[10];
	double (*f)(double);
	printf("������Ҫ���еĲ���,sin,cos��tan: \n");
	scanf("%s", ch);
	/*---����Ϊsin����fָ��⺯��sin---*/
	if (strcmp(ch, "sin") == 0)
	{
		f = sin;
	}
	/*---����Ϊcos����fָ��⺯��cos---*/
	else if (strcmp(ch, "cos") == 0)
	{
		f = cos;
	}
	/*---����Ϊtan����fָ��⺯��cos---*/
	else if (strcmp(ch, "tan") == 0)
	{
		f = tan;
	}
	else
	{
		printf("�������!\n");
		/*---�������---*/
		return;
	}
	for (int i = 0; i < 5; ++i)
	{
		printf("%d�ȵ�ֵΪ%.2f\n", (i + 1) * 10, (*f)(3.14 * (i + 1) / 18));
	}
	system("pause");
	return 0;
}