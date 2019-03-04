#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//struct Stu 
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//};

// 匿名结构体
struct  
{
	int a;
	char b;
	float c;
} x;

struct  
{
	int a;
	char b;
	float c;
} a[20], *p;

// 结构体的自引用
//struct Node 
//{
//	int data;
//	struct Node* next;
//};

//typedef struct Node 
//{
//	int data;
//	struct Node* next;
//} Node;

struct Point 
{
	int x;
	int y;
} p1;

struct Point p2;

struct Point p3 = { 1, 2 };

struct Stu 
{
	char name[15];
	int age;
};

struct Stu s = { "zhangsan", 20 };

struct Node 
{
	int data;
	struct Point p;
	struct Node* next;
} n1 = { 10, { 4, 5 }, NULL};

struct Node n2 = { 20, { 5, 6 }, NULL };

struct s1 
{
	char c1;
	int i;
	char c2;
};

struct s2 
{
	char c1;
	char c2;
	int i;
};

struct s3 
{
	double d;
	char c;
	int i;
};

struct s4 
{
	char c1;
	struct s3 s;
	double d;
};

struct A 
{
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};

struct s 
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

enum Day
{
	Mon, Tues, Wed, Thur, Fri, Sat, Sun
};

enum Sex
{
	Male,
	Female,
	Secret
};

enum Color
{
	Red = 1,
	Green = 2,
	Blue = 4
};

union Un
{
	char c;
	int i;
};

union Un1
{
	char c[5];
	int i;
};

union Un2
{
	short c[7];
	int i;
};

int main()
{
	//printf("%lu\n", sizeof(union Un1));
	printf("%lu\n", sizeof(union Un2));
	//union Un un;
	//un.i = 0x11223344;
	//un.c = 0x55;
	//printf("%x\n", un.i);

	//printf("%p\n", &(un.i));
	//printf("%p\n", &(un.c));
	//printf("%lu\n", sizeof(un));

	//enum Color clr = Green;
	//printf("%d\n", clr);
	//clr = -1;
	//printf("%d\n", clr);

	//printf("%d\n", Secret);

	//struct s s5 = { 0 };
	//s5.a = 10;
	//s5.b = 12;
	//s5.c = 3;
	//s5.d = 4;

	//struct A a;
	//_Bool b = false;

	//printf("%lu\n", sizeof(struct s1));
	//printf("%lu\n", sizeof(struct s2));
	//printf("%lu\n", sizeof(struct s3));
	//printf("%lu\n", sizeof(struct s4));

	// 类型不匹配
	//p = &a;
	system("pause");
	return 0;
}