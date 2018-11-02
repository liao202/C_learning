/*
** 2018_11_02
** bite_c_5_4
** 一直接收键盘字符,小写字母按大写输出,大写字母按小写输出,数字不输出 
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	char input[1024] = { 0 };
	while (1)
	{
		printf("请输入一个字符: \n");
		scanf("%s", input);
		if (input[0] >= 65 && input[0] <= 90)
		{
			input[0] += 32;
			printf("%s", input);
		}
		else if (input[0] >= 97 && input[0] <= 122)
		{
			input[0] -= 32;
			printf("%s", input);
		}
	}
	system("pause");
	return 0;
}