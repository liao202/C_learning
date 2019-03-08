#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

struct Student 
{
	int num;
	int age;
};

typedef struct Student Stu;

int randomNumber()
{
	return 18 + rand() % (30 - 18 + 1);
}

void stuInit(Stu* s, int num)
{
	assert(s != NULL);
	int i = 0;
	for (i = 0; i < num; ++i)
	{
		s[i].num = i + 1;
		s[i].age = randomNumber();
	}
}

void stuDisplay(Stu* s, int num)
{
	assert(s != NULL);
	int i = 0;
	for (i = 0; i < num; ++i)
	{
		printf("[%d]: \t%d\n", s[i].num, s[i].age);
	}
}

double averageAge(Stu* s, int num)
{
	assert(s != NULL);
	int i = 0;
	double average_age = 0;
	for (i = 0; i < num; ++i)
	{
		average_age += s[i].age;
	}
	return average_age / num;
}

int main()
{
	srand((unsigned int)time(0));
	Stu* s = NULL;
	int num = 0;
	printf("Please input the num of students: \n");
	scanf("%d", &num);
	assert(num >= 0);
	s = (Stu*)malloc(sizeof(Stu) * num);
	assert(s != NULL);
	stuInit(s, num);
	printf("These students are below: \n");
	stuDisplay(s, num);
	printf("average age: %.2f\n", averageAge(s, num));
	free(s);
	s = NULL;
	system("pause");
	return 0;
}