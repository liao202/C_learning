/*
**	输入某员工的工资, 求出发放工资时该职工工资所需不同币值的张数
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	/*---工资---*/
	double wage = 0;
	/*---币值为value的数量---*/
	int value_100_number = 0;
	int value_50_number = 0;
	int value_10_number = 0;
	int value_5_number = 0;
	int value_2_number = 0;
	int value_1_number = 0;
	int value_0_5_number = 0;
	int value_0_2_number = 0;
	int value_0_1_number = 0;
	printf("请输入工资: \n");
	scanf("%lf", &wage);
	/*---币值为100元的张数---*/
	value_100_number = (int)(wage / 100);
	wage -= value_100_number * 100;
	/*---币值为50元的张数---*/
	value_50_number = (int)(wage / 50);
	wage -= value_50_number * 50;
	/*---币值为10元的张数---*/
	value_10_number = (int)(wage / 10);
	wage -= value_10_number * 10;
	/*---币值为5元的张数---*/
	value_5_number = (int)(wage / 5);
	wage -= value_5_number * 5;
	/*---币值为2元的张数---*/
	value_2_number = (int)(wage / 2);
	wage -= value_2_number * 2;
	/*---币值为1元的张数---*/
	value_1_number = (int)(wage / 1);
	wage -= value_1_number * 1;
	/*---币值为0.5元的张数---*/
	value_0_5_number = (int)(wage / 0.5);
	wage -= value_0_5_number * 0.5;
	/*---币值为0.2元的张数---*/
	value_0_2_number = (int)(wage / 0.2);
	wage -= value_0_2_number * 0.2;
	/*---币值为0.1的张数---*/
	value_0_1_number = (int)(wage / 0.1);
	printf("需要币值为100的%d张!\n", value_100_number);
	printf("需要币值为50的%d张!\n", value_50_number);
	printf("需要币值为10的%d张!\n", value_10_number);
	printf("需要币值为5的%d张!\n", value_5_number);
	printf("需要币值为2的%d张!\n", value_2_number);
	printf("需要币值为1的%d张!\n", value_1_number);
	printf("需要币值为0.5的%d张!\n", value_0_5_number);
	printf("需要币值为0.2的%d张!\n", value_0_2_number);
	printf("需要币值为0.1的%d张!\n", value_0_1_number);
	system("pause");
	return 0;
}