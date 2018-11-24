/*
**	通过用户的输入,使函数指针指向相应的函数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"

int main()
{
	char arr[20];
	double degree = 0;
	double (*f)(double);
	while (1)
	{
		printf("请输入sin, cos或tan: \n");
		gets(arr);
		/*---输入sin,指针指向sin函数---*/
		if (strcmp(arr, "sin") == 0)
		{
			f = sin;
			break;
		}
		/*---输入cos,指针指向cos函数---*/
		else if (strcmp(arr, "cos") == 0)
		{
			f = cos;
			break;
		}
		/*---输入tan,指针指向tan函数---*/
		else if (strcmp(arr, "tan") == 0)
		{
			f = tan;
			break;
		}
		/*---输入有误, 重新输入---*/
		else
		{
			printf("输入有误,请重新输入!\n");
			continue;
		}
	}
	printf("请输入度数(弧度):\n");
	scanf("%lf", &degree);
	printf("The result is: %f\n", (*f)(degree * 3.14 / 180));
	system("pause");
	return 0;
}