/*
**	谁是小偷数组方法
**	A说:B没有偷,是D偷的
**	B说:我没有偷,是C偷的
**	C说:A没有偷,是B偷的
**	D说:我没有偷
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	/*---四个元素表示ABCD,值为1是小偷,值为0不是小偷---*/
	int arr[4] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		/*---假设第i个人为小偷,其他人不是---*/
		for (int j = 0; j < 4; j++)
		{
			if (j == i)
			{
				arr[j] = 1;
			}
			else
			{
				arr[j] = 0;
			}
			/*---判断这种假设下条件是否满足---*/
			if (arr[1] + arr[3] == 1 &&
				arr[1] + arr[2] == 1 &&
				arr[0] + arr[1] == 1)
			{
				printf("The thief is %c.\n", i + 'A');
			}
		}
	}
	system("pause");
	return 0;
}