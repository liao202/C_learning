#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[10] = {
		1, 2, 3, 4, 5, 6, 7, 8, 9, 0
	};
	int* p = arr;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; ++i)
	{
		printf("&arr[%d] = %p  <==>  p + %d = %p\n",
			i, &arr[i], i, p + i);
	}

	//int arr[10] = {
	//	1, 2, 3, 4, 5, 6, 7, 8, 9, 0
	//};
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);

	//int n = 0x11223344;
	//char* pc = (char*)&n;
	//char* pi = &n;
	//*pc = 0x55;
	//*pi = 0;

	//int n = 10;
	//char* pc = (char*)&n;
	//int* pi = &n;
	//printf("&n: %p\n", &n);
	//printf("pc: %p\n", pc);
	//printf("pc + 1: %p\n", pc + 1);
	//printf("pi: %p\n", pi);
	//printf("pi + 1: %p\n", pi + 1);

	//int a = 10;
	//int* p = &a;
	system("pause");
	return 0;
}