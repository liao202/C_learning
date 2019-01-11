/*
**	反斜杠0的打印
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	char temp = '\0';
	printf("字符串中碰到\0就会停止! \n");
	printf("\n");
	printf("将\\0按字符打印: \n");
	printf("%c\n", temp);
	printf("将\\0按字符串打印: \n");
	printf("%s\n", temp);
	printf("将\\0按整数打印: \n");
	printf("%d\n", temp);
	system("pause");
	return 0;
}