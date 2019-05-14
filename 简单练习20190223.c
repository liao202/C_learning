#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define M 3
#define N 3

// 杨氏矩阵中元素的查找
// 从右上角开始搜索
int find(int arr[][N], int target, int* row, int* col)
{
	int i = 0;
	int j = N - 1;
	while (i < row & j >= 0)
	{
		if (arr[i][j] == target)
		{
			*row = i;
			*col = j;
			return 1;
		}
		else if (arr[i][j] > target)
		{
			--j;
		}
		else
		{
			++i;
		}
	}
	*row = -1;
	*col = -1;
	return 0;
}

// 从左上角开始搜索
// 递归实现
int find(int arr[M][N], int row, int col,
	int x, int y, int key, int* px, int* py)
{
	if (x < 0 || y >= col)
	{
		*px = -1;
		*py = -1;
		return 0;
	}
	if (key > arr[x][y])
	{
		//return没有可以吗?此处的
		return find(arr, row, col, x, y + 1, key, px, py);
	}
	else if (key < arr[x][y])
	{
		//return没有可以吗?此处的
		return find(arr, row, col, x - 1, y, key, px, py);
	}
	else
	{
		*px = x;
		*py = y;
		return 1;
	}
	return;
}

// 循环左移字符串
void rotateLeft(char arr[], int n)
{
	char temp = arr[0];
	char* cur = arr;
	for (int i = 0; i < n; ++i)
	{
		while (*(cur + 1) != '\0')
		{
			*cur = *(cur + 1);
			++cur;
		}
		*cur = temp;
	}
}

// 左旋n次 
// 前n个字符逆置
// 剩余的字符逆转
// 整体逆置
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		++left;
		--right;
	}
}

void rotateLeft(char* str, int n)
{
	reverse(str, str + n - 1);
	reverse(str + n, str + strlen(str) - 1);
	reverse(str, str + strlen(str) - 1);
}

// 循环右移写一下

// 判断一个字符串是否是另一个字符串循环左移或右移得到的
// dest		src
int isRotate(char* str1, char* str2)
{
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	int len = strlen(str1);
	while (--len)
	{
		leftRotate();
		if (strcmp(str1, str2) == 0)
		{
			return 1;
		}
	}
	return 0;
}

// 用子串的方法来判断上述
// dest: abcdef
// src:  cdefab
// 将dest变为: abcdefabcdef
// src将会是新dest的一个子串
// src是新dest的一个子串, 则src是dest旋转的来的
int is_rotate(char* dest, char* src)
{
	int len = strlen(dest);
	// 字符串的拼接
	// 目标和源的地址不能相同
	//strcat(dest, dest);
	strncat(dest, dest, len);
	if (strstr(dest, src) != NULL)
	{
		return 1;
	}
	return 0;
}

// 自己实现strcat
void myStrcat(char* dest, char* src)
{
	
}

// 数组中有两个数只出现一次
// 其他所有数都出现了两次, 找出这两个数
{
	int ret = 0;
	int pos = -1;
	int len = sizeof(arr) / sizeof(arr[0]);
	// 连续做异或
	for (int i = 0; i < len; ++i)
	{
		ret ^= arr[i];
	}
	// 找到异或结果中某个1的位置
	for (int i = 0; i < 32; ++i)
	{
		if ((ret >> i) & 1 == 1)
		{
			pos = i;
			break;
		}
	}
	// 根据这个1的位置将数组分成两组
	for (int i = 0; i < sz; ++i)
	{
		//分别对每一组连续做异或
		if (((arr[i] >> pos) & 1) == 1)
		{
			x ^= arr[i];
		}
		//对每一组连续做异或
		else
		{
			y ^= arr[i];
		}
		// x 和 y就是要找的结果
	}
}

// 给一笔钱, 看可以喝多少瓶汽水
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);
	total = money / 1;
	empty = money / 2;
	while (empty > 1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);
	return 0;
}

// 模拟实现strcpy
char* myStrcpy(char* dest, char* src)
{
	char* temp = dest;
}

// 模拟实现strcat