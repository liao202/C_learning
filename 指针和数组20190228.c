#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a[3][4] = { 0 };
	printf("sizeof(a):\t\t %d\n", sizeof(a));
	printf("sizeof(a[0][0]):\t %d\n", sizeof(a[0][0]));
	printf("sizeof(a[0]:\t\t %d\n", sizeof(a[0]));
	printf("sizeof(a[0] + 1):\t %d\n", sizeof(a[0] + 1));
	printf("sizeof(*(a[0] + 1)):\t %d\n", sizeof(*(a[0] + 1)));
	printf("sizeof(a + 1):\t\t %d\n", sizeof(a + 1));
	printf("sizeof(*(a + 1)):\t %d\n", sizeof(*(a + 1)));
	printf("sizeof(&a[0] + 1):\t %d\n", sizeof(&a[0] + 1));
	printf("sizeof(*(&a[0] + 1)):\t %d\n", sizeof(*(&a[0] + 1)));
	printf("sizeof(*a):\t\t %d\n", sizeof(*a));
	printf("sizeof(a[3]:\t\t %d\n", sizeof(a[3]));

	//char* p = "abcdef";
	//printf("sizeof(p):\t\t %d\n", sizeof(p));
	//printf("sizeof(p + 1):\t\t %d\n", sizeof(p + 1));
	//printf("sizeof(*p):\t\t %d\n", sizeof(*p));
	//printf("sizeof(p[0]):\t\t %d\n", sizeof(p[0]));
	//printf("sizeof(&p):\t\t %d\n", sizeof(&p));
	//printf("sizeof(&p + 1):\t\t %d\n", sizeof(&p + 1));
	//printf("sizeof(&p[0] + 1):\t %d\n", sizeof(&p[0] + 1));

	//printf("\n");

	//printf("strlen(p):\t\t %d\n", strlen(p));
	//printf("strlen(p + 1):\t\t %d\n", strlen(p + 1));
	//printf("strlen(*p):\t\t %d\n", strlen(*p));
	//printf("strlen(p[0]:\t\t %d\n", strlen(p[0]));
	//printf("strlen(&p):\t\t %d\n", strlen(&p));
	//printf("strlen(&p + 1):\t\t %d\n", strlen(&p + 1));
	//printf("strlen(&p[0] + 1):\t %d\n", strlen(&p[0] + 1));

	//char arr[] = "abcdef";
	//printf("sizeof(arr):\t\t %d\n", sizeof(arr));
	//printf("sizeof(arr + 0):\t %d\n", sizeof(arr + 0));
	//printf("sizeof(*arr):\t\t %d\n", sizeof(*arr));
	//printf("sizeof(arr[1]):\t\t %d\n", sizeof(arr[1]));
	//printf("sizeof(&arr):\t\t %d\n", sizeof(&arr));
	//printf("sizeof(&arr + 1):\t %d\n", sizeof(&arr + 1));
	//printf("sizeof(&arr[0] + 1):\t %d\n", sizeof(&arr[0] + 1));

	//printf("\n");

	//printf("strlen(arr):\t\t %d\n", strlen(arr));
	//printf("strlen(arr + 0):\t %d\n", strlen(arr + 0));
	//printf("strlen(*arr):\t\t %d\n", strlen(*arr));
	//printf("strlen(arr[1]):\t\t %d\n", strlen(arr[1]));
	//printf("strlen(&arr):\t\t %d\n", strlen(&arr));
	//printf("strlen(&arr + 1):\t %d\n", strlen(&arr + 1));
	//printf("strlen(&arr[0] + 1):\t %d\n", strlen(&arr[0] + 1));

	//char arr[] = {
	//	'a', 'b', 'c', 'd', 'e', 'f'
	//};
	//printf("sizeof(arr):\t\t %d\n", sizeof(arr));
	//printf("sizeof(arr + 0):\t %d\n", sizeof(arr + 0));
	//printf("sizeof(*arr):\t\t %d\n", sizeof(*arr));
	//printf("sizeof(arr[1]):\t\t %d\n", sizeof(arr[1]));
	//printf("sizeof(&arr):\t\t %d\n", sizeof(&arr));
	//printf("sizeof(&arr + 1):\t %d\n", sizeof(&arr + 1));
	//printf("sizeof(&arr[0] + 1):\t %d\n", sizeof(&arr[0] + 1));

	//printf("\n");

	//printf("strlen(arr):\t\t %d\n", strlen(arr));
	//printf("strlen(arr + 0):\t %d\n", strlen(arr + 0));
	//printf("strlen(*arr):\t\t %d\n", strlen(*arr));
	//printf("strlen(arr[1]: \t\t %d\n", strlen(arr[1]));
	//printf("strlen(&arr):\t\t %d\n", strlen(&arr));
	//printf("strlen(&arr + 1):\t %d\n", strlen(&arr + 1));
	//printf("strlen(&arr[0] + 1):\t %d\n", strlen(&arr[0] + 1));

	//int a[] = {
	//	1, 2, 3, 4
	//};
	//printf("sizeof(a):\t\t %d\n", sizeof(a));
	//printf("sizeof(a + 0):\t\t %d\n", sizeof(a + 0));
	//printf("sizeof(*a):\t\t %d\n", sizeof(*a));
	//printf("sizeof(a + 1):\t\t %d\n", sizeof(a + 1));
	//printf("sizeof(a[1]):\t\t %d\n", sizeof(a[1]));
	//printf("sizeof(&a):\t\t %d\n", sizeof(&a));
	//printf("sizeof(*&a):\t\t %d\n", sizeof(*&a));
	//printf("sizeof(&a + 1):\t\t %d\n", sizeof(&a + 1));
	//printf("sizeof(&a[0]):\t\t %d\n", sizeof(&a[0]));
	//printf("sizeof(&a[0] + 1):\t %d\n", sizeof(&a[0] + 1));
	system("pause");
	return 0;
}