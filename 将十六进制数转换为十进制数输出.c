/*
**	从键盘上输入十六进制数, 将其转换为十进制数输出
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 50

/*---十六进制转十进制---*/
int hexToDecimal(char hex[])
{
	int ret = 0;
	for (int i = 0; hex[i] != '\0'; ++i)
	{
		if (hex[i] >= '0' && hex[i] <= '9')
		{
			ret = ret * 16 + hex[i] - '0';
		}
		if (hex[i] >= 'a' && hex[i] <= 'f')
		{
			ret = ret * 16 + hex[i] - 'a' + 10;
		}
		if (hex[i] >= 'A' && hex[i] <= 'Z')
		{
			ret = ret * 16 + hex[i] - 'A' + 10;
		}
	}
	return ret;
}

int main()
{
	char hex[LEN] = { 0 };
	char c = 0;
	int i = 0;
	int end_flag = 1;
	int flag = 0;
	printf("请输入一个十六进制数: \n");
	while (((c = getchar()) != '\0' && i < LEN && end_flag == 1))
	{
		/*---如果输入的数据合法---*/
		if (c >= '0' && c <= '9' ||
			c >= 'a' && c <= 'f' ||
			c >= 'A' && c <= 'F')
		{
			flag = 1;
			hex[i] = c;
			++i;
		}
		/*---输入不合法, 开始转换---*/
		else if (flag == 1)
		{
			hex[i] = '\0';
			printf("该十六进制的十进制形式为: %d\n", hexToDecimal(hex));
			printf("是否继续?输入N或n结束\n");
			c = getchar();
			if (c == 'N' || c == 'n')
			{
				end_flag = 0;
			}
			else
			{
				flag = 0;
				i = 0;
				printf("请输入一个十六进制数: \n");
			}
		}
	}
	system("pause");
	return 0;
}