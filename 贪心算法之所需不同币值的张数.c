/*
**	����ĳԱ���Ĺ���, ������Ź���ʱ��ְ���������費ͬ��ֵ������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	/*---����---*/
	double wage = 0;
	/*---��ֵΪvalue������---*/
	int value_100_number = 0;
	int value_50_number = 0;
	int value_10_number = 0;
	int value_5_number = 0;
	int value_2_number = 0;
	int value_1_number = 0;
	int value_0_5_number = 0;
	int value_0_2_number = 0;
	int value_0_1_number = 0;
	printf("�����빤��: \n");
	scanf("%lf", &wage);
	/*---��ֵΪ100Ԫ������---*/
	value_100_number = (int)(wage / 100);
	wage -= value_100_number * 100;
	/*---��ֵΪ50Ԫ������---*/
	value_50_number = (int)(wage / 50);
	wage -= value_50_number * 50;
	/*---��ֵΪ10Ԫ������---*/
	value_10_number = (int)(wage / 10);
	wage -= value_10_number * 10;
	/*---��ֵΪ5Ԫ������---*/
	value_5_number = (int)(wage / 5);
	wage -= value_5_number * 5;
	/*---��ֵΪ2Ԫ������---*/
	value_2_number = (int)(wage / 2);
	wage -= value_2_number * 2;
	/*---��ֵΪ1Ԫ������---*/
	value_1_number = (int)(wage / 1);
	wage -= value_1_number * 1;
	/*---��ֵΪ0.5Ԫ������---*/
	value_0_5_number = (int)(wage / 0.5);
	wage -= value_0_5_number * 0.5;
	/*---��ֵΪ0.2Ԫ������---*/
	value_0_2_number = (int)(wage / 0.2);
	wage -= value_0_2_number * 0.2;
	/*---��ֵΪ0.1������---*/
	value_0_1_number = (int)(wage / 0.1);
	printf("��Ҫ��ֵΪ100��%d��!\n", value_100_number);
	printf("��Ҫ��ֵΪ50��%d��!\n", value_50_number);
	printf("��Ҫ��ֵΪ10��%d��!\n", value_10_number);
	printf("��Ҫ��ֵΪ5��%d��!\n", value_5_number);
	printf("��Ҫ��ֵΪ2��%d��!\n", value_2_number);
	printf("��Ҫ��ֵΪ1��%d��!\n", value_1_number);
	printf("��Ҫ��ֵΪ0.5��%d��!\n", value_0_5_number);
	printf("��Ҫ��ֵΪ0.2��%d��!\n", value_0_2_number);
	printf("��Ҫ��ֵΪ0.1��%d��!\n", value_0_1_number);
	system("pause");
	return 0;
}