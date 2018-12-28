/*
**	字符串中第一个唯一字符
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define LEN 20

//int firstUniqueChar(char* str)
//{
//	int value = 0;
//	int i = 0;
//	int j = 0;
//	int len = strlen(str);
//	while (str[i] != 0)
//	{
//		value = str[i];
//		for (j = 0; j < len; ++j)
//		{
//			if (value == str[j] && j != i)
//			{
//				break;
//			}
//		}
//		if (j == len)
//		{
//			return i;
//		}
//		++i;
//}

int firstUniqueChar(char str[])
{
	int value = 0;
	int i = 0;
	int j = 0;
	while (str[i] != '\0')
	{
		value = str[i];
		j = 0;
		while (str[j] != '\0')
		{
			if (value == str[j] && j != i)
			{
				break;
			}
			++j;
		}
		if (str[j] == '\0')
		{
			return i;
		}
		++i;
	}
	return -1;
}

int main()
{
	char str[LEN] = "cc";
	int index = 0;
	index = firstUniqueChar(str);
	printf("第一个唯一字符的索引为: %d\n", index);
	system("pause");
	return 0;
}