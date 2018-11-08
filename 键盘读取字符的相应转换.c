/*
	从键盘上读取字符，若为小写字母转化为大写字母输出
	若为大写，转化为小写输出
	若为数字不输出
	若为其他字符，原样输出
*/

#include "stdio.h"
#include "stdlib.h"

int main()
{
	while (1)
	{
		int c = getchar();
		if (c == EOF)
		{
			break;
		}
		if (c >= 'a' && c <= 'z')
		{
			putchar(c - ('a' - 'A'));
		}
		else if (c >= 'A' && c <= 'Z')
		{
			putchar(c + ('a' - 'A'));
		}
		else
		{
			putchar(c);
		}
	}
	system("pause");
	return 0;
}