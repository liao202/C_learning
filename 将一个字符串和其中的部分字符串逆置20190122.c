#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int myStrlen(char* str)
{
	assert(str != NULL);
	if (*str == '\0')
	{
		return 0;
	}
	return myStrlen(++str) + 1;
}

void reverseString(char* start, char* end)
{
	assert(start != NULL);
	assert(end != NULL);
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
	assert(str != NULL);
	char* temp = NULL;
	char* start = str;
	char* end = str + myStrlen(str) - 1;
	// 整个字符串的反转
	reverseString(start, end);
	while (*str != '\0')
	{
		temp = str;
		while ((*str != ' ') && (*str != '\0'))
		{
			++str;
		}
		char* right = str - 1;
		reverseString(temp, right);
		if (*str == ' ')
		{
			++str;
		}
	}
}

int main()
{
	char str[] = "student a am i";

	printf("初始字符串: %s\n", str);
	reverse(str);
	printf("调整后: %s\n", str);

	system("pause");
	return 0;
}