/*
**	输入要进行的操作和度数,输出相应的结果
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	char ch[10];
	double (*f)(double);
	printf("请输入要进行的操作,sin,cos或tan: \n");
	scanf("%s", ch);
	/*---输入为sin则让f指向库函数sin---*/
	if (strcmp(ch, "sin") == 0)
	{
		f = sin;
	}
	/*---输入为cos则让f指向库函数cos---*/
	else if (strcmp(ch, "cos") == 0)
	{
		f = cos;
	}
	/*---输入为tan则让f指向库函数cos---*/
	else if (strcmp(ch, "tan") == 0)
	{
		f = tan;
	}
	else
	{
		printf("输入错误!\n");
		/*---程序结束---*/
		return;
	}
	for (int i = 0; i < 5; ++i)
	{
		printf("%d度的值为%.2f\n", (i + 1) * 10, (*f)(3.14 * (i + 1) / 18));
	}
	system("pause");
	return 0;
}