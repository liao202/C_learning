/*
**	�������һ���ַ�����,������������ɵ�����
**	ͳ�Ƹ���,�������Щ����
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int integer[20];

int integer_find(char* str)
{
	int len = strlen(str);
	/*---�������ֵĸ���---*/
	int series_number_count = 0;
	/*---��������---*/
	int integer_count = 0;
	/*---���������������������ֵ---*/
	int digit = 0;
	int index = len - 1;
	/*---�������,�Ӻ���ǰ---*/
	for (; index >= 0; --index)
	{
		/*---�����λ������---*/
		if (*(str + index) >= '0' && *(str + index) <= '9')
		{
			++series_number_count;
		}
		/*---�����λ��������---*/
		else
		{
			/*---������series_number_count����---*/
			if (series_number_count > 0)
			{
				/*---��λ����ʮλ�ϵ����ֳ�10,���εݼ�---*/
				for (int temp = 1; series_number_count > 0; --series_number_count)
				{
					digit += (*(str + index + series_number_count) - 48) * temp;
					temp *= 10;
				}
				/*---��������������---*/
				integer[integer_count] = digit;
				/*---��ֵ����,�����´�ͳ��---*/
				digit = 0;
				/*---����������1---*/
				++integer_count;
			}
		}
	}
	/*---���������,����û�з�����---*/
	if (series_number_count > 0)
	{
		/*---��λ����ʮλ�ϵ����ֳ�10,���εݼ�---*/
		for (int temp = 1; series_number_count > 0; --series_number_count)
		{
			digit += (*(str + index + series_number_count) - 48) * temp;
			temp *= 10;
		}
		/*---��������������---*/
		integer[integer_count] = digit;
		/*---��ֵ����,�����´�ͳ��---*/
		digit = 0;
		/*---����������1---*/
		++integer_count;
	}
	return integer_count;
}

int main()
{
	char str[50];
	int integer_count = 0;
	printf("�������ַ���: \n");
	gets(str);
	integer_count = integer_find(str);
	printf("һ����%d������!\n��Щ��������: \n",
		integer_count);
	/*---�ַ����е������Ĵ�ӡ---*/
	for (int i = integer_count - 1; i >= 0; --i)
	{
		printf("%d\t", integer[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}