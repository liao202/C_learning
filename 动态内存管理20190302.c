#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//void test()
//{
//	int* p = (int*)malloc(100);
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//}

//void getMemory(char* p)
//{
//	p = (char*)malloc(100);
//}

//void test()
//{
//	char* str = NULL;
//	getMemory(str);
//	assert(str != NULL);
//	strcpy(str, "hello, world!");
//	printf("%s\n", str);
//}

//char* getMemory()
//{
//	char p[] = "hello, world!";
//	return p;
//}
//
//void test()
//{
//	char* str = NULL;
//	str = getMemory();
//	printf("%s\n", str);
//}

//void getMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}

//void test()
//{
//	char* str = NULL;
//	getMemory(&str, 100);
//	strcpy(str, "hello");
//	printf("%s\n", str);
//	free(str);
//	str = NULL;
//}

//void test()
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world!");
//		printf("%s\n", str);
//	}
//}

//typedef struct st_type
//{
//	int i;
//	// 柔性数组成员
//	int a[]; 
//} type_a;


int main()
{
	//int i = 0;
	//type_a* p = (type_a*)malloc(sizeof(type_a) + 100 * sizeof(int));
	//p->i = 100;
	//for (i = 0; i < 100; ++i)
	//{
	//	p->a[i] = i;
	//}
	//free(p);

	//printf("%lu\n", sizeof(type_a));
	//test();

	//while (1)
	//{
	//	test();
	//}
		

	//int* ptr = (int*)malloc(sizeof(int) * 10);

	//int* temp = (int*)realloc(ptr, sizeof(int) * 20);
	//free(temp);
	//temp = NULL;
	//free(temp);

	//int* p = (int*)calloc(10, sizeof(int));
	//if (p != NULL)
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; ++i)
	//	{
	//		printf("%-2d", p[i]);
	//	}
	//	printf("\n");
	//}
	//int num = 0;
	//scanf("%d", &num);
	//int* ptr = NULL;
	//ptr = (int*)malloc(sizeof(int) * num);
	//if (ptr != NULL)
	//{
	//	int i = 0;
	//	for (i = 0; i < num; ++i)
	//	{
	//		*(ptr + i) = 0;
	//	}
	//}
	//free(ptr);
	//ptr = NULL;
	//int arr[num] = { 0 };

	// 在栈上开辟一段空间
	//int val = 20;
	//char arr[10] = { 0 };
	system("pause");
	return 0;
}