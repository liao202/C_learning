/*
**	��·�鲢����
**	�����������ַ���
**	�ϲ���������ַ���
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define LEN 20

int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	char str1[LEN] = "adfh";
	char str2[LEN] = "bluvxz";
	char str[LEN] = { 0 };
	//char str[LEN] = "\0";
	char* p;
	/*---ԭ���������ַ�����ӡ---*/
	printf("�����ַ����ֱ�����: \n");
	printf("str1: ");
	/*---puts�Դ����з�'\n'---*/
	puts(str1);
	printf("str2: ");
	puts(str2);
	/*---���ַ���str1���ַ���str2��û�н���ʱ---*/
	while (str1[i] != '\0' && str2[j] != '\0')
	{
		if (str1[i] > str2[j])
		{
			str[k] = str2[j++];
		}
		else
		{
			str[k] = str1[i++];
		}
		++k;
	}
	str[k] = '\0';
	/*---��û�������ַ��������ݿ�����---*/
	if (str1[i] == '\0')
	{
		p = str2 + j;
	}
	else
	{
		p = str1 + i;
	}
	strcat(str, p);
	/*---�����ӡ---*/
	printf("��ӡ�������: \nstr: ");
	puts(str);
	system("pause");
	return 0;
}