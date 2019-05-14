#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define M 3
#define N 3

// ���Ͼ�����Ԫ�صĲ���
// �����Ͻǿ�ʼ����
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

// �����Ͻǿ�ʼ����
// �ݹ�ʵ��
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
		//returnû�п�����?�˴���
		return find(arr, row, col, x, y + 1, key, px, py);
	}
	else if (key < arr[x][y])
	{
		//returnû�п�����?�˴���
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

// ѭ�������ַ���
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

// ����n�� 
// ǰn���ַ�����
// ʣ����ַ���ת
// ��������
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

// ѭ������дһ��

// �ж�һ���ַ����Ƿ�����һ���ַ���ѭ�����ƻ����Ƶõ���
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

// ���Ӵ��ķ������ж�����
// dest: abcdef
// src:  cdefab
// ��dest��Ϊ: abcdefabcdef
// src��������dest��һ���Ӵ�
// src����dest��һ���Ӵ�, ��src��dest��ת������
int is_rotate(char* dest, char* src)
{
	int len = strlen(dest);
	// �ַ�����ƴ��
	// Ŀ���Դ�ĵ�ַ������ͬ
	//strcat(dest, dest);
	strncat(dest, dest, len);
	if (strstr(dest, src) != NULL)
	{
		return 1;
	}
	return 0;
}

// �Լ�ʵ��strcat
void myStrcat(char* dest, char* src)
{
	
}

// ��������������ֻ����һ��
// ����������������������, �ҳ���������
{
	int ret = 0;
	int pos = -1;
	int len = sizeof(arr) / sizeof(arr[0]);
	// ���������
	for (int i = 0; i < len; ++i)
	{
		ret ^= arr[i];
	}
	// �ҵ��������ĳ��1��λ��
	for (int i = 0; i < 32; ++i)
	{
		if ((ret >> i) & 1 == 1)
		{
			pos = i;
			break;
		}
	}
	// �������1��λ�ý�����ֳ�����
	for (int i = 0; i < sz; ++i)
	{
		//�ֱ��ÿһ�����������
		if (((arr[i] >> pos) & 1) == 1)
		{
			x ^= arr[i];
		}
		//��ÿһ�����������
		else
		{
			y ^= arr[i];
		}
		// x �� y����Ҫ�ҵĽ��
	}
}

// ��һ��Ǯ, �����Ժȶ���ƿ��ˮ
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

// ģ��ʵ��strcpy
char* myStrcpy(char* dest, char* src)
{
	char* temp = dest;
}

// ģ��ʵ��strcat