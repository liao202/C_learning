/*
** 2018_11_07
** �ݹ�ͷǵݹ��ж��ַ�������
*/

#include "stdio.h"
#include "stdlib.h"
/*---����һ�ݹ�ʵ��---*/
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

/*---�ǵݹ鷽ʽʵ��---*/
int main()
{
	char* str = "HelloWorld";
	int len = 0;
	for (len = 0; str[len] != '\0'; len++);
	printf("The string length is %d.", len);
	system("pause");
	return 0;
}