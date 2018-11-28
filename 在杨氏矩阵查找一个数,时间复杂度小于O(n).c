/*
**	在杨氏矩阵中查找一个元素,要求时间复杂度小于O(n)
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define ROW 3
#define COL 3

struct Point
{
	int x;
	int y;
};

typedef struct Point Point;

/*---元素查找---*/
Point eleSearch(int arr[ROW][COL], int ele)
{
	Point ret = { -1, -1 };
	int x = 0;
	int y = COL - 1;
	while ((x <= ROW - 1) && (y >= 0))
	{
		/*---相等查找成功,返回坐标---*/
		if (ele == arr[x][y])
		{
			ret.x = x;
			ret.y = y;
			return ret;
		}
		/*---右上角元素比要查找的大,去掉最右一列---*/
		if (ele < arr[x][y])
		{
			--y;
		}
		/*---右上角元素比要查找的小,去掉最上一行---*/
		if (ele > arr[x][y])
		{
			++x;
		}
	}
	return ret;
}

int main()
{
	int ele = 0;
	int arr[ROW][COL] = { { 1, 2, 3 }, 
			{ 2, 3, 4 }, { 3, 4, 5 } };
	Point result = { -1, -1 };
	printf("请输入要查找的元素ele: \n");
	scanf("%d", &ele);
	result = eleSearch(arr, ele);
	printf("%d的坐标为: ", ele);
	printf("(%d, %d)\n", result.x + 1, result.y + 1);
	system("pause");
	return 0;
}