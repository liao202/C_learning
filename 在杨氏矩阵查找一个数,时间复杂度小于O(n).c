/*
**	�����Ͼ����в���һ��Ԫ��,Ҫ��ʱ�临�Ӷ�С��O(n)
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

/*---Ԫ�ز���---*/
Point eleSearch(int arr[ROW][COL], int ele)
{
	Point ret = { -1, -1 };
	int x = 0;
	int y = COL - 1;
	while ((x <= ROW - 1) && (y >= 0))
	{
		/*---��Ȳ��ҳɹ�,��������---*/
		if (ele == arr[x][y])
		{
			ret.x = x;
			ret.y = y;
			return ret;
		}
		/*---���Ͻ�Ԫ�ر�Ҫ���ҵĴ�,ȥ������һ��---*/
		if (ele < arr[x][y])
		{
			--y;
		}
		/*---���Ͻ�Ԫ�ر�Ҫ���ҵ�С,ȥ������һ��---*/
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
	printf("������Ҫ���ҵ�Ԫ��ele: \n");
	scanf("%d", &ele);
	result = eleSearch(arr, ele);
	printf("%d������Ϊ: ", ele);
	printf("(%d, %d)\n", result.x + 1, result.y + 1);
	system("pause");
	return 0;
}