/*
**	输入三个字符串，统计出其中共有多少个大写字母、小写字母、空格、数字和其他字符
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/*---计算字符串长度---*/
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
	/*---大写字母---*/
	int capital = 0;
	/*---小写字母---*/
	int lowercase = 0;
	/*---数字---*/
	int number = 0;
	/*---空格---*/
	int space = 0;
	/*---其他字符数---*/
	int others = 0;
	for (int i = 0; i < 3; i++)
	{
		printf("please input the %dth string: \n", i + 1);
		/*---输入字符串---*/
		gets(str[i]);
	}
	/*---判断三个字符串中的各种字符的数量---*/
	for (int i = 0; i < 3; i++)
	{
		/*---可用自己定义的函数来替换strlen()---*/
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
	printf("大写字母、小写字母、数字、空格、其它字符分别为: \n");
	printf("capital = %d\nlowercase = %d\nnumber = %d\nspace = %d\nothers = %d\n",
		capital, lowercase, number, space, others);
	system("pause");
	return 0;
}