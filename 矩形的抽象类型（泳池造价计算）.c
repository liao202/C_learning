#include "stdio.h"
#include "stdlib.h"

struct rectangle
{
	double length;
	double width;
};

typedef struct rectangle Rectangle;

/*---��ʼ������---*/
Rectangle* init_rectangle(double l, double w)
{
	Rectangle* temp = (Rectangle*)malloc(sizeof(Rectangle));
	temp->length = l;
	temp->width = w;
	return temp;
}

/*---�������---*/
double area(Rectangle* r)
{
	return r->length * r->width;
}

/*---�ܳ�����---*/
double perimeter(Rectangle* r)
{
	return 2 * (r->length + r->width);
}

int main()
{
	/*---������������---*/
	double length = 0;
	double width = 0;
	Rectangle *pool, *pool_rim;
	double fence_cost = 0;
	double concreat_cost = 0;
	double total_cost = 0;

	/*---������Ӿ�صĳ��ȺͿ��---*/
	printf("please enter the length of the poor: ");
	scanf("%lf", &length);
	printf("please enter the width of the poor: ");
	scanf("%lf", &width);

	/*---Ӿ�غ���Χ���εĳ�ʼ��---*/
	pool = init_rectangle(length, width);
	pool_rim = init_rectangle(length + 6, width + 6);

	/*---����դ�����---*/
	fence_cost = 50 * perimeter(pool_rim);
	printf("The fence's cost is: %.2lf\n", fence_cost);

	/*---����������---*/
	concreat_cost = 30 * (area(pool_rim) - area(pool));
	printf("The concreat's cost is: %.2lf\n", concreat_cost);

	/*---���������---*/
	total_cost = fence_cost + concreat_cost;
	printf("The total cost is: %.2lf\n", total_cost);
	system("pause");
	return 0;
}