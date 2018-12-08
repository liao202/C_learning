/*
**	两路归并排序
**	将两个有序字符串
**	合并成有序的字符串
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
	/*---原来的两个字符串打印---*/
	printf("两个字符串分别如下: \n");
	printf("str1: ");
	/*---puts自带换行符'\n'---*/
	puts(str1);
	printf("str2: ");
	puts(str2);
	/*---当字符串str1和字符串str2都没有结束时---*/
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
	/*---将没结束的字符串的内容拷过来---*/
	if (str1[i] == '\0')
	{
		p = str2 + j;
	}
	else
	{
		p = str1 + i;
	}
	strcat(str, p);
	/*---结果打印---*/
	printf("打印结果如下: \nstr: ");
	puts(str);
	system("pause");
	return 0;
}