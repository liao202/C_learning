/*
** 2018_11_07
** 递归和非递归判断字符串长度
*/

#include "stdio.h"
#include "stdlib.h"
/*---方法一递归实现---*/
int string_length(char* str)
{
	if (str[0] == '\0')
	{
		return 0;
	}
	return string_length(str + 1) + 1;
}

int main()
{
	char *str = "HelloWorld";
	printf("The string's length is %d.\n", string_length(str));
	system("pause");
	return 0;
}

/*---非递归方式实现---*/
int main()
{
	char* str = "HelloWorld";
	int len = 0;
	for (len = 0; str[len] != '\0'; len++);
	printf("The string length is %d.", len);
	system("pause");
	return 0;
}