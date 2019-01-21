/*
**	ÏòÁ¿
*/

#define _CRT_SECURE_NO_WARNINGS

#include "vector.h"

void getArray(Vector* v)
{
	v->elements = (ElementType*)malloc(sizeof(ElementType)
		* v->arraySize);
	if (v->elements == NULL)
	{
		printf("Memory Allocation Error!\n");
	}
}

void vectorInit(Vector* v, int sz)
{
	if (sz <= 0)
	{
		printf("Invalid array size!\n");
	}
	else
	{
		v->arraySize = sz;
		v->vectorLength = 0;
		getArray(v);
	}
}

ElementType getNode(Vector* v, int i)
{
	return (i < 0 || i >= v->vectorLength)
		? (ElementType)NULL : v->elements[i];
}

void vectorFree(Vector* v)
{
	free(v->elements);
}

int find(Vector* v, ElementType x)
{
	for (int i = 0; i < v->vectorLength; ++i)
	{
		if (v->elements[i] == x)
		{
			return i;
		}
	}
	return -1;
}

Bool insert(Vector* v, ElementType x, int i)
{
	if (v->vectorLength == v->arraySize)
	{
		printf("overflow!\n");
		return FALSE;
	}
	else if (i < 0 || i >= v->vectorLength)
	{
		printf("Invalid index!\n");
		return FALSE;
	}
	else
	{
		for (int j = v->vectorLength - 1; j >= i; --j)
		{
			v->elements[j + 1] = v->elements[j];
		}
		v->elements[i] = x;
		++v->vectorLength;
	}
}

Bool remove(Vector* v, int i)
{
	if (v->vectorLength == 0)
	{
		printf("Vector is empty!\n");
		return FALSE;
	}
	else if (i < 0 || i >= v->vectorLength)
	{
		printf("Invalid index!\n");
	}
	else
	{
		for (int j = i; j < v->vectorLength - 1; ++j)
		{
			v->elements[j] = v->elements[j + 1];
		}
		--v->vectorLength;
		return TRUE;
	}
}

Vector* Union(Vector* va, Vector* vb)
{
	int m, n, i, j, k;
	ElementType x;
	Vector* vc = (Vector*)malloc(sizeof(Vector));

	n = va->vectorLength;
	m = vb->vectorLength;
	vectorInit(vc, m + n);

	j = 0;
	for (i = 0; i < n; ++i)
	{
		x = getNode(va, i);
		insert(vc, x, j);
		++j;
	}

	for (i = 0; i < m; ++i)
	{
		x = getNode(vb, i);
		k = find(va, x);
		if (k == -1)
		{
			insert(vc, x, j);
			++j;
		}
	}
	return vc;
}

Vector* Intersection(Vector* va, Vector* vb)
{
	int m, n, i, j, k;
	ElementType x;
	Vector* vc = (Vector*)malloc(sizeof(Vector));

	n = va->vectorLength;
	m = vb->vectorLength;
	vectorInit(vc, (m > n) ? n : m);

	i = 0;
	j = 0;
	while (i < m)
	{
		x = getNode(vb, i);
		k = fin(va, x);
		if (k != -1)
		{
			insert(vc, x, j);
			++j;
		}
		++i;
	}
	return vc;
}