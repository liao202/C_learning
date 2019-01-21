/*
**	约瑟夫问题
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "vector.h"

// 约瑟夫问题--n个人围成一圈, 第s个人开始报数, 报数为m的退出, 重新报数
void Josephus(Vector* p, int n, int s, int m)
{
	// 将人员编号存入向量p
	int k = 1, i, s1 = s, j, w;
	for (i = 0; i < n; ++i)
	{
		insert(p, k, i);
		++k;
	}
	for (j = n; j >= 1; --j)
	{
		s1 = (s1 + m - 1) % j;
		if (s1 == 0)
		{
			s1 = j;
		}
		w = getNode(p, s1 - 1);
		remove(p, s1 - 1);
		insert(p, w, n - 1);
	}
}

int main()
{
	Vector p;
	Vector* v = &p;
	vectorInit(v, 10);
	Josephus(v, 10, 3, 5);
	for (int i = 0; i < v->vectorLength; ++i)
	{
		printf("[%d] %d \n", i, v->elements[i]);
	}
	system("pause");
	return 0;
}