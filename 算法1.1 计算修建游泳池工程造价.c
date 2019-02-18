/*
**	算法1.1 计算修建游泳池工程造价
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

// 抽象矩形
struct Rectangle 
{
	double length;
	double width;
};

typedef struct Rectangle Rectangle;

// 矩形初始化
Rectangle* rectangleInit(double l, double w)
{
	Rectangle* temp = (Rectangle*)malloc(sizeof(Rectangle));
	temp->length = l;
	temp->width = w;
	return temp;
}

// 矩形面积
double area(Rectangle* r)
{
	return r->length * r->width;
}

// 矩形周长
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

	printf("请输入游泳池的长和宽: \n");
	scanf("%lf %lf", &l, &w);

	pool = rectangleInit(l, w);
	poolRim = rectangleInit(l + 6, w + 6);

	// 计算栅栏造价
	fence_cost = perimeter(poolRim) * 50;
	printf("栅栏造价为: %lf元!\n", fence_cost);

	//计算过道造价
	concrete_cost = (area(poolRim) - area(pool)) * 30;
	printf("过道造价为: %lf元!\n", concrete_cost);

	// 计算总造价
	total_cost = fence_cost + concrete_cost;
	printf("总造价为: %lf元\n", total_cost);

	// 释放
	free(pool);
	free(poolRim);

	system("pause");
	return 0;
}