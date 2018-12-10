/*
**	字符数组的部分逆置
**	不能使用库函数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 50

/*---字符串长度统计---*/
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

/*---字符串逆置---*/
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
	//整体逆置
	reverseString(start, end);
	//部分调整
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
	//字符数组的打印
	printf("字符数组结果如下: \n");
	printf("%s\n", arr);
	reverse(arr);
	printf("调整后的数组结果如下: \n");
	printf("%s\n", arr);
	system("pause");
	return 0;
}