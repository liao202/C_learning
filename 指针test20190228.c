#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* c[] = {
		"ENTER", "NEW", "POINT", "FIRST"
	};
	char** cp[] = {
		c + 3, c + 2, c + 1, c
	};
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);

	//char* a[] = {
	//	"work", "at", "xatu"
	//};
	//char** pa = a;
	//++pa;
	//printf("%s\n", *pa);

	//int aa[2][5] = {
	//	1, 2, 3, 4, 5, 6, 7, 8, 9, 10
	//};
	//int* ptr1 = (int*)(&aa + 1);
	//int* ptr2 = (int*)(*(aa + 1));
	//printf("%d %d\n", *(ptr1 - 1), *(ptr2 - 1));

	//int a[5][5];
	//int(*p)[4];
	//p = a;
	//printf("a_ptr = %#p, p_ptr = %#p\n",
	//	&a[4][2], &p[4][2]);
	//printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);

	//int a[3][2] = {
	//	(0, 1), (2, 3), (4, 5)
	//};
	//for (int i = 0; i < 3; ++i)
	//{
	//	for (int j = 0; j < 2; ++j)
	//	{
	//		printf("%-3d", a[i][j]);
	//	}
	//	printf("\n");
	//}
	//int* p;
	//p = a[0];
	//printf("%d\n", p[0]);

	//int a[4] = {
	//	1, 2, 3, 4
	//};
	//int* ptr1 = (int*)(&a + 1);
	//int* ptr2 = (int*)((int)a + 1);
	//printf("%x, %x\n", ptr1[-1], *ptr2);

	//int a[5] = {
	//	1, 2, 3, 4, 5
	//};
	//int* ptr = (int*)(&a + 1);
	//printf("%d, %d\n", *(a + 1), *(ptr - 1));
	system("pause");
	return 0;
}