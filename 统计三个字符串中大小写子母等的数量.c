/*
**	���������ַ�����ͳ�Ƴ����й��ж��ٸ���д��ĸ��Сд��ĸ���ո����ֺ������ַ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/*---�����ַ�������---*/
int check_string_length(char* str)
{
	int length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}
	return length;
}

int main()
{
	char str[3][100];
	/*---��д��ĸ---*/
	int capital = 0;
	/*---Сд��ĸ---*/
	int lowercase = 0;
	/*---����---*/
	int number = 0;
	/*---�ո�---*/
	int space = 0;
	/*---�����ַ���---*/
	int others = 0;
	for (int i = 0; i < 3; i++)
	{
		printf("please input the %dth string: \n", i + 1);
		/*---�����ַ���---*/
		gets(str[i]);
	}
	/*---�ж������ַ����еĸ����ַ�������---*/
	for (int i = 0; i < 3; i++)
	{
		/*---�����Լ�����ĺ������滻strlen()---*/
		for (int j = 0; j < (int)strlen(str[i]); j++)
		{
			if (str[i][j] >= 'A' && str[i][j] <= 'Z')
			{
				capital++;
			}
			else if (str[i][j] >= 'a' && str[i][j] <= 'z')
			{
				lowercase++;
			}
			else if (str[i][j] >= '0' && str[i][j] <= '9')
			{
				number++;
			}
			else if (str[i][j] == ' ')
			{
				space++;
			}
			else
			{
				others++;
			}
		}
	}
	printf("��д��ĸ��Сд��ĸ�����֡��ո������ַ��ֱ�Ϊ: \n");
	printf("capital = %d\nlowercase = %d\nnumber = %d\nspace = %d\nothers = %d\n",
		capital, lowercase, number, space, others);
	system("pause");
	return 0;
}