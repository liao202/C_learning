/*
**	线性表的运算
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

typedef int ElementType;

struct LinerList 
{
	ElementType* data;
	int max_size;
	int last;
};

typedef struct LinerList LinerList;

// 线性表的初始化
void linerListInit(LinerList* l, int sz)
{
	if (sz > 0)
	{
		l->max_size = sz;
		l->last = 0;
		l->data = (ElementType*)malloc(sizeof(LinerList)
			* l->max_size);
	}
}

// 线性表的释放
void freeLinerList(LinerList* l)
{
	free(l->data);
}

// 判断线性表是否为空
int linerListEmpty(LinerList* l)
{
	return (l->last <= 0) ? 1 : 0;
}

// 判断线性表是否已满
int linerListFull(LinerList* l)
{
	return (l->last >= l->max_size) ? 1 : 0;
}

// 求线性表的长度
int linerListLength(LinerList* l)
{
	return l->last;
}

// 取线性表的第i个表目
ElementType getElem(LinerList* l, int i)
{
	return (i < 0 || i >= l->last) ? (ElementType)NULL : l->data[i];
}

// 查找
int locateElem(LinerList* l, ElementType x)
{
	for (int i = 0; i < l->last; ++i)
	{
		if (l->data[i] == x)
		{
			return i;
		}
	}
	return -1;
}

// 插入
int insertElem(LinerList* l, ElementType x, int i)
{
	if (i < 0 || i > l->last || l->last == l->max_size)
	{
		return 0;
	}
	else
	{
		for (int j = l->last - 1; j >= i; --j)
		{
			l->data[j + 1] = l->data[j];
		}
		l->data[i] = x;
		++l->last;
		return 1;
	}
}

// 删除表中第i个结点
int deleteElem(LinerList* l, int i)
{
	if (i < 0 || i >= l->last || l->last == 0)
	{
		return 0;
	}
	else
	{
		for (int j = i; j < l->last - 1; ++j)
		{
			l->data[j] = l->data[j + 1];
		}
		--l->last;
		return 1;
	}
}

// 打印线性表的表目
void printOut(LinerList* l)
{
	for (int i = 0; i < l->last; ++i)
	{
		printf("%d ", l->data[i]);
	}
	printf("\n");
}

int main()
{
	LinerList* l = (LinerList*)malloc(sizeof(LinerList));

	linerListInit(l, 5);
	insertElem(l, 10, 0);
	insertElem(l, 20, 0);
	insertElem(l, 30, 0);
	insertElem(l, 40, 0);
	insertElem(l, 50, 0);
	if (insertElem(l, 60, 0))
	{
		printOut(l);
	}
	else if (linerListFull(l))
	{
		printf("List is full, failed to insert!\n");
	}
	printOut(l);
	deleteElem(l, 1);
	printOut(l);
	deleteElem(l, 2);
	printOut(l);

	printf("The location of data 30 is %d\n",
		locateElem(l, 30));
	printf("The third value is %d\n",
		getElem(l, 2));

	freeLinerList(l);
	system("pause");
	return 0;
}