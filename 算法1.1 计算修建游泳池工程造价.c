/*
**	�㷨1.1 �����޽���Ӿ�ع������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

// �������
struct Rectangle 
{
	double length;
	double width;
};

typedef struct Rectangle Rectangle;

// ���γ�ʼ��
Rectangle* rectangleInit(double l, double w)
{
	Rectangle* temp = (Rectangle*)malloc(sizeof(Rectangle));
	temp->length = l;
	temp->width = w;
	return temp;
}

// �������
double area(Rectangle* r)
{
	return r->length * r->width;
}

// �����ܳ�
double perimeter(Rectangle* r)
{
	return (r->length + r->width) * 2;
}

int main()
{
	Rectangle* pool;
	Rectangle* poolRim;
	double w, l;
	double fence_cost, concrete_cost, total_cost;

	printf("��������Ӿ�صĳ��Ϳ�: \n");
	scanf("%lf %lf", &l, &w);

	pool = rectangleInit(l, w);
	poolRim = rectangleInit(l + 6, w + 6);

	// ����դ�����
	fence_cost = perimeter(poolRim) * 50;
	printf("դ�����Ϊ: %lfԪ!\n", fence_cost);

	//����������
	concrete_cost = (area(poolRim) - area(pool)) * 30;
	printf("�������Ϊ: %lfԪ!\n", concrete_cost);

	// ���������
	total_cost = fence_cost + concrete_cost;
	printf("�����Ϊ: %lfԪ\n", total_cost);

	// �ͷ�
	free(pool);
	free(poolRim);

	system("pause");
	return 0;
}