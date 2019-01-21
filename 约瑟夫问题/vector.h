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

// ���������Ĵ洢�ռ�
void getArray(Vector* v);

// ��ʼ��һ������
void vectorInit(Vector* v, int sz);

// ȡ�����ĵ�i����Ŀ
ElementType getNode(Vector* v, int i);

// �ͷ������洢�ռ�
void vectorFree(Vector* v);

// �����в���
int find(Vector* v, ElementType x);

// �����Ĳ���
Bool insert(Vector* v, ElementType x, int i);

// ������ɾ��
Bool remove(Vector* v, int i);

// ���ϲ�����
Vector* Union(Vector* va, Vector* vb);

// ���Ͻ�����
Vector* Intersection(Vector* va, Vector* vb);