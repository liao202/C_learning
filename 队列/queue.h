#pragma once

typedef int ElementType;

enum boolean
{
	FALSE,
	TRUE
};

typedef enum boolean Bool;

struct Queue 
{
	// ��ͷ, ��βָ��
	int rear, front;
	// ��Ŷ���Ԫ�ص�����
	ElementType* elements;
	// ���пռ�����ߴ�
	int max_size;
};

typedef struct Queue Queue;

// ���еĳ�ʼ��
void queueInit(Queue* q, int sz);

// ���пռ��ͷ�
void queueFree(Queue* q);

// �����ÿ�
void makeEmpty(Queue* q);

// �ж϶����Ƿ�Ϊ��
Bool isEmpty(Queue* q);

// �ж϶����Ƿ�����
Bool isFull(Queue* q);

// ����е�Ԫ�ظ���
int length(Queue* q);