/*
**	10个小孩围成一圈分糖果。
**	第一个小孩10块，第二个小孩2块，第三个小孩8块， 第四个小孩22块，第五个小孩16块
**	第六个小孩4块，第七个小孩10块，第八个小孩6块，第九个小孩14块，第十个小孩20块
**	按如下方法进行调整
**	所有小孩检查自己手里的糖果数量，若为奇数，则向老师要一块，然后分一半给下一个小孩
**	若使得小孩手中的糖果都相同，需要调整多少次，每个小孩手里有多少块糖
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---检查每个小朋友手中的糖果是否相等---*/
int check_sugar_equal(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (array[0] != array[i])
		{
			return 1;
		}
	}
	return 0;
}

/*---输出每次调整后的调整次数和每个小孩的糖果数---*/
void print_sugar(int frequence, int size, int* array)
{
	printf("调整次数为: %-2d\n", frequence);
	printf("本次调整后每个小孩手里的糖果数量: \n");
	for (int i = 0; i < size; i++)
	{
		printf("%-3d", array[i]);
	}
	printf("\n\n");
}

int main()
{
	int sugar_for_child[] = { 10, 2, 8, 22, 16, 4, 10, 6, 14, 20 };
	int size = sizeof(sugar_for_child) / sizeof(sugar_for_child[0]);
	int frequence = 0;
	int temp[10];
	/*---检查每个小孩糖果数是否相同，不同返回1，相同返回0---*/
	while (check_sugar_equal(sugar_for_child, size))
	{
		/*---每个小孩将糖果分出一半---*/
		for (int i = 0; i < 10; i++)
		{
			if (sugar_for_child[i] % 2 == 0)
			{
				temp[i] = sugar_for_child[i] / 2;
			}
			else
			{
				temp[i] = (sugar_for_child[i] + 1) / 2;
			}
		}
		/*---将分出的糖果给下一个小孩---*/
		for (int i = 0; i < 9; i++)
		{
			sugar_for_child[i + 1] = temp[i] + temp[i + 1];
 		}
		/*---最后一个小孩将一半给第一个小孩---*/
		sugar_for_child[0] = temp[9] + temp[0];
		frequence++;
		print_sugar(frequence, size, sugar_for_child);
	}
	system("pause");
	return 0;
}