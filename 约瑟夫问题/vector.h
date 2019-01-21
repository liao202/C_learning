#pragma once

#include "stdio.h"
#include "stdlib.h"

enum boolen
{
	FALSE,
	TRUE
};

typedef enum boolen Bool;

typedef int ElementType;

struct Vector 
{
	ElementType* elements;
	int arraySize;
	int vectorLength;
};

typedef struct Vector Vector;

// 申请向量的存储空间
void getArray(Vector* v);

// 初始化一空向量
void vectorInit(Vector* v, int sz);

// 取向量的第i个表目
ElementType getNode(Vector* v, int i);

// 释放向量存储空间
void vectorFree(Vector* v);

// 向量中查找
int find(Vector* v, ElementType x);

// 向量的插入
Bool insert(Vector* v, ElementType x, int i);

// 向量的删除
Bool remove(Vector* v, int i);

// 集合并运算
Vector* Union(Vector* va, Vector* vb);

// 集合交运算
Vector* Intersection(Vector* va, Vector* vb);