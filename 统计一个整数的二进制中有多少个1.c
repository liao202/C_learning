/*
**	ͳ��һ�������ڼ�����洢���ж��ٸ�1
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int number = 0;
	int count = 0;
	printf("����������: \n");
	scanf("%d", &number);
	for (int i = 0; i < 32; ++i)
	{
		/*
		**	��������Ϊnumber & (1 << i) == 1
		**	�����,��Ϊ��Ӧλ����˽��Ϊ1,��
		**	��������Ϊ1
		*/
		if (number & (1 << i))
		{
			++count;
		}
	}
	printf("%d����%d��1! \n", number, count);
	system("pause");
	return 0;
}
