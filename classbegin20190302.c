#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int global = 2019;

enum Sex
{
	Male,
	Female,
	Secret
};

int add(int a, int b)
{
	return a + b;
}

//void test()
//{
//	int i = 0;
//	++i;
//	printf("%d  ", i);
//}

void test()
{
	static int i = 0;
	++i;
	printf("%d  ", i);
}

// 定义宏
#define MAX 1000

// 定义宏函数
#define ADD(x, y) ((x) + (y))

int main()
{
	int num = 10;
	int* p = &num;
	*p = 20;
	printf("%d\n", num);

	//int num = 10;
	//printf("%p\n", &num);

	//int sum = ADD(2, 3);
	//printf("sum = %d\n", sum);
	//sum = 10 * ADD(2, 3);
	//printf("sum = %d\n", sum);

	//int i = 0;
	//for (i = 0; i < 10; ++i)
	//{
	//	test();
	//}
	//printf("\n");

	//int arr[10] = {
	//	1, 2, 3, 4, 5, 6, 7, 8, 9, 10
	//};
	//int i = 0;
	//for (i = 0; i < 10; ++i)
	//{
	//	printf("%d  ", arr[i]);
	//}
	//printf("\n");

	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//printf("输入两个操作数: > ");
	//scanf("%d %d", &num1, &num2);
	//sum = add(num1, num2);
	//printf("sum = %d\n", sum);

	//int line = 0;
	//while (line <= 20000)
	//{
	//	++line;
	//	printf("我要努力敲代码!\n");
	//}
	//if (line > 20000)
	//{
	//	printf("赢取白富美!\n");
	//}

	//int coding = 0;
	//printf("你会去敲代码吗?\n");
	//scanf("%d", &coding);
	//if (coding == 1)
	//{
	//	printf("坚持, 你会有好offer!\n");
	//}
	//else
	//{
	//	printf("放弃, 回家卖红薯!\n");
	//}

	//printf("%lu\n", strlen("abcdef"));
	//printf("%lu\n", strlen("c:\test\32\test.c"));

	//printf("%c\n", '\'');
	//printf("%s\n", "\"");

	//printf("\"hehe\"");

	//printf("c:\code\test.c\n");

	//printf("%f\n", 3.14);
	//printf("%d\n", 100);
	//const double pi = 3.14;
	//#define MAX 100
	//printf("%d\n", MAX);
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//printf("Please input num1 and num2: \n");
	//scanf("%d %d", &num1, &num2);
	//sum = num1 + num2;
	//printf("sum = %d\n", sum);

	//int local = 2019;
	//int global = 20;
	//printf("%d\n", global);
	//int age = 15;
	//float weight = 45.5;
	//char ch = 'w';

	//printf("%lu\n", sizeof(char));
	//printf("%lu\n", sizeof(short));
	//printf("%lu\n", sizeof(int));
	//printf("%lu\n", sizeof(long));
	//printf("%lu\n", sizeof(long long));
	//printf("%lu\n", sizeof(float));
	//printf("%lu\n", sizeof(double));
	//printf("%lu\n", sizeof(long double));

	//printf("hello, world!\n");
	//printf("hehe!\n");
	system("pause");
	return 0;
}