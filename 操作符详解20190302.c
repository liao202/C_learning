#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int countBit(int n)
{
	int ret = 0;
	while (n)
	{
		++ret;
		n = n & (n - 1);
	}
	return ret;
}

int main()
{
	

	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;
	//printf("a = %d\n b = %d\n c = %d\n d = %d\n",
	//	a, b, c, d);

	//int a = -10;
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof int);

	//int num = 0;
	//printf("Please input the num: \n");
	//scanf("%d", &num);
	//printf("%d\n", countBit(num));

	//int a = 10;
	//int b = 20;
	//printf("The origin num: %d %d\n", a, b);
	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;
	//printf("The num after swap: %d %d\n", a, b);
	system("pause");
	return 0;
}