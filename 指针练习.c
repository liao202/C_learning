/*
**	÷∏’Î–°¡∑œ∞
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(*&a));
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(&a + 1));
	printf("%d\n", sizeof(&a[0]));

	char a[] = { 'a', 'b', 'c', 'd', 'e' };
	printf("%d\n", strlen(a));
	printf("%d\n", strlen(a + 0));
	printf("%d\n", strlen(*a));
	printf("%d\n", strlen(a[1]));
	printf("%d\n", strlen(&a));
	printf("%d\n", strlen(&a + 1));
	printf("%d\n", strlen(&a[0] + 1));

	char* p = "abcdef";
	printf("%d\n", strlen(p));
	printf("%d\n", strlen(p + 1));
	printf("%d\n", strlen(*p));
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p + 1));
	printf("%d\n", sizeof(&p[0] + 1));

	char a[] = "abcdef";
	printf("%d\n", strlen(a));
	printf("%d\n", strlen(a + 0));
	printf("%d\n", strlen(*a));
	printf("%d\n", strlen(a[1]));
	printf("%d\n", strlen(&a));
	printf("%d\n", strlen(&a + 1));
	printf("%d\n", strlen(&a[0] + 1));
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a + 0));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[1]));
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(&a + 1));
	printf("%d\n", sizeof(&a[0] + 1));

	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0] + 1));
	printf("%d\n", sizeof(*(a[0] + 1)));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(*(a + 1)));
	printf("%d\n", sizeof(&a[0] + 1));
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));

	system("pause");
	return 0;
}