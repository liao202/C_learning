/*
**	统计一个整数在计算机存储中有多少个1
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int number = 0;
	int count = 0;
	printf("请输入数字: \n");
	scanf("%d", &number);
	for (int i = 0; i < 32; ++i)
	{
		/*
		**	若条件改为number & (1 << i) == 1
		**	会出错,因为对应位的相乘结果为1,并
		**	不代表结果为1
		*/
		if (number & (1 << i))
		{
			++count;
		}
	}
	printf("%d中有%d个1! \n", number, count);
	system("pause");
	return 0;
}
