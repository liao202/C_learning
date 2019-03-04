#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct Stu 
{
	char name[1024];
	int score;
};

typedef struct Stu Stu;

void stuInit(Stu* s, int num)
{
	int i = 0;
	for (i = 0; i < num; ++i)
	{
		printf("Please input %dth student's name and his score: ",
			i + 1);
		scanf("%s %d", &s[i].name, &s[i].score);
	}
}

void stuDisplay(Stu* s, int num)
{
	int i = 0;
	for (i = 0; i < num; ++i)
	{
		printf("%s: \t%d\n", s[i].name, s[i].score);
	}
}

void quickSort(Stu* s, int left, int right)
{
	if (left > right)
	{
		return;
	}
	int i = left;
	int j = right;
	Stu value = s[left];
	while (i < j)
	{
		while (i < j && s[j].score >= value.score)
		{
			--j;
		}
		s[i] = s[j];
		while (i < j && s[i].score <= value.score)
		{
			++i;
		}
		s[j] = s[i];
	}
	s[i] = value;
	quickSort(s, left, i - 1);
	quickSort(s, i + 1, right);
}

int main()
{
	Stu* stu = NULL;
	int num = 0;
	printf("Please input the num of student: \n");
	scanf("%d", &num);
	assert(num >= 0);
	stu = (Stu*)malloc(sizeof(Stu) * num);
	assert(stu != NULL);
	stuInit(stu, num);
	printf("The origin stu: \n");
	stuDisplay(stu, num);
	quickSort(stu, 0, num - 1);
	printf("The sorted student: \n");
	stuDisplay(stu, num);
	free(stu);
	stu = NULL;
	system("pause");
	return 0;
}