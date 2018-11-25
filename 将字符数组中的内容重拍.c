/*
**	���ַ������е���������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---�ַ������ȵ�ͳ��---*/
int len_string(char* str)
{
	int len = 0;
	while (*str != '\0')
	{
		++str;
		++len;
	}
	return len;
}

/*---�ַ���������---*/
void str_reverse(char* start, char* end)
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

/*---��������ȷ˳��---*/
void adjust(char* str)
{
	char* temp = NULL;
	char* start = str;
	char* end = str + len_string(str) - 1;
	/*---�����ַ���������---*/
	str_reverse(start, end);
	while (*str != '\0')
	{
		temp = str;
		while ((*str != ' ') && (*str != '\0'))
		{
			++str;
		}
		char* right = str - 1;
		str_reverse(temp, right);
		if (*str == ' ')
		{
			++str;
		}
	}
}

int main()
{
	/*
	**	ʹ����������29�л����,
	**	str��ָ�벻������,
	**	������֮��ĸ�ֵ�����������
	*/
	//char *str = "student a am i";
	char str[] = "student a am i";
	printf("%s\n", str);
	adjust(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}

//  [11/25/2018 ��ʰ������]