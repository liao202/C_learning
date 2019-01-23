/*
**	ºêº¯Êý
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define PRINT_LINE printf("This is a simple define function!\n")

#define SQUARE(x) x * x

#define SQUARE_NEW(x) (x) * (x)

#define DOUBLE(x) (x) + (x)

#define DOUBLE_NEW(x) ((x) + (x))

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
	PRINT_LINE;
	printf("%d\n", SQUARE(5));
	printf("%d\n", SQUARE(5 + 1));
	printf("%d\n", SQUARE_NEW(5 + 1));
	printf("%d\n", DOUBLE(5));
	printf("%d\n", 10 * DOUBLE(5));
	printf("%d\n", 10 * DOUBLE_NEW(5));
	int x = 3;
	int y = 5;
	int z = MAX(x++, y++);
	printf("x = %d, y = %d, z = x + y = %d\n",
		x, y, z);

	int a = 1;
	int b = 2;
	int c = max(a++, b++);
	printf("a = %d, b = %d, c = %d\n",
		a, b, c);
	system("pause");
	return 0;
}