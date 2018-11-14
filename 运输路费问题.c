/*
**	运输运费问题
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	double essential_price = 0.002;
	double weight = 0;
	double distance = 0;
	double total_price = 0;
	double discount = 0;
	int index = 0;
	printf("please input the distance and weight:\n");
	scanf("%lf %lf", &distance, &weight);
	if (distance >= 3000)
	{
		index = 12;
	}
	else
	{
		index = (int)(distance / 250);
	}
	switch (index)
	{
	case 0: discount = 0; break;
	case 1: discount = 0.02; break;
	case 2: 
	case 3: discount = 0.05; break;
	case 4: 
	case 5: 
	case 6: 
	case 7: discount = 0.1; break;
	case 8: 
	case 9:
	case 10:
	case 11: discount = 0.15; break;
	case 12: discount = 0.08; break;
	}
	total_price = essential_price * weight * distance * (1 - discount);
	printf("The total price is: %lf", total_price);
	system("pause");
	return 0;
}