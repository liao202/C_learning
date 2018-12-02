/*
**	ͳ��һ�����Ķ�������ʽ���ж��ٸ�1
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---����һ---*/
int bitOneCount(unsigned int value)
{
	int count = 0;
	while (value != 0)
	{
		if (value % 2 == 1)
		{
			++count;
		}
		/*---value����Ϊunsigned int����, ��������---*/
		value /= 2;
	}
	return count;
}

/*---������---*/
//int bitOneCount(int value)
//{
//	int count = 0;
//	for (int i = 0; i < 32; ++i)
//	{
//		if (((value >> i) & 1) == 1)
//		{
//			++count;
//		}
//	}
//	return count;
//}

/*---������---*/
//int bitOneCount(int value)
//{
//	int count = 0;
//	for (int i = 0; i < 32; ++i)
//	{
//		/*
//		**	ע��if�ڵ�����
//		**	���ܸ���Ϊ����
//		**	(value & (1 << i)) == 1
//		**	�����, �뷽�����Ա�
//		*/
//		if ((value & (1 << i)))
//		{
//			++count;
//		}
//	}
//	return count;
//}

/*---ע�ⷽ�����ͷ�����������---*/

int main()
{
	int count;
	int value = 0;
	printf("��������ֵvalue: \n");
	scanf("%d", &value);
	count = bitOneCount(value);
	printf("%d����%d��1!\n", value, count);
	system("pause");
	return 0;
}