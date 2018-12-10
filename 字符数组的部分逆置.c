/*
**	�ַ�����Ĳ�������
**	����ʹ�ÿ⺯��
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 50

/*---�ַ�������ͳ��---*/
int strlength(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		++count;
		++str;
	}
	return count;
}

/*---�ַ�������---*/
void reverseString(char* start, char* end)
{
	char temp = 0;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		++start;
		--end;
	}
}

void reverse(char* str)
{
	char* start = str;
	char* end = str + strlength(str) - 1;
	char* cur = str;
	//��������
	reverseString(start, end);
	//���ֵ���
	while (*cur != '\0')
	{
		char* begin = cur;
		while (*cur != ' ' && *cur != '\0')
		{
			++cur;
		}
		reverseString(begin, cur - 1);
		while (*cur == ' ')
		{
			++cur;
		}
	}
}

int main()
{
	char arr[LEN] = "student a am i";
	//�ַ�����Ĵ�ӡ
	printf("�ַ�����������: \n");
	printf("%s\n", arr);
	reverse(arr);
	printf("�����������������: \n");
	printf("%s\n", arr);
	system("pause");
	return 0;
}