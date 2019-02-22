#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define N 5

struct Score 
{
	int chinese;
	int math;
	int english;
};

typedef struct Score Score;

struct Student 
{
	int num;
	char name[1024];
	Score score;
};

typedef struct Student Student;

void stuInit(Student* stu, int num)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < num; ++i)
	{
		printf("Please enter the No.%d student info(num, name, score): \n",
			i + 1);
		scanf("%d", &stu[i].num);
		scanf("%s", stu[i].name);
		scanf("%d", &stu[i].score.chinese);
		scanf("%d", &stu[i].score.math);
		scanf("%d", &stu[i].score.english);
	}
}

void stuDisplay(Student* stu, int num)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < num; ++i)
	{
		printf("The No.%d studnet info is below: \n",
			i + 1);
		printf("num: %d, name: %s, score(chinese, math, english): %d, %d, %d\n",
			stu[i].num, stu[i].name, stu[i].score.chinese, stu[i].score.math, stu[i].score.english);
	}
}

int main()
{
	Student stu[N];
	stuInit(stu, N);
	stuDisplay(stu, N);
	system("pause");
	return 0;
}