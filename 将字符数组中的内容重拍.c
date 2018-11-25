/*
**	将字符数组中的内容重排
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---字符串长度的统计---*/
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

/*---字符串的逆置---*/
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

/*---调整到正确顺序---*/
void adjust(char* str)
{
	char* temp = NULL;
	char* start = str;
	char* end = str + len_string(str) - 1;
	/*---整个字符串的逆序---*/
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
	**	使用下面这行29行会出错,
	**	str是指针不是数组,
	**	解引用之后的赋值操作会出问题
	*/
	//char *str = "student a am i";
	char str[] = "student a am i";
	printf("%s\n", str);
	adjust(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}

//  [11/25/2018 叄拾叄画生]