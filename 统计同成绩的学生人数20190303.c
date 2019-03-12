#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

struct Student 
{
	char name[1024];
	int score;
};

typedef struct Student Stu;

int randomNumber()
{
	return 11 + rand() % (99 - 11 + 1);
}

char* randomName()
{
	char* ret = (char*)calloc(5, sizeof(char));
	int i = 0;
	for (i = 0; i < 4; ++i)
	{
		ret[i] = 97 + rand() % (122 - 97);
	}
	ret[0] = toupper(ret[0]);
	// ÄÚ´æÐ¹Â©
	return ret;
}

void stuInit(Stu* s, int num)
{
	if (s == NULL)
	{
		return;
	}
	int i = 0;
	for (i = 0; i < num; ++i)
	{
		strcpy(s[i].name, randomName());
		s[i].score = randomNumber();
	}
}

void stuDisplay(const Stu* s, int num)
{
	if (s == NULL)
	{
		return;
	}
	int i = 0;
	for (i = 0; i < num; ++i)
	{
		printf("%s: \t%d\n",
			s[i].name, s[i].score);
	}
}

int main()
{
	srand((unsigned int)time(0));
	Stu* s = NULL;
	int num = 0;
	printf("Please input num of students: \n");
	scanf("%d", &num);
	assert(num >= 0);
	s = (Stu*)malloc(sizeof(Stu) * num);
	assert(s != NULL);
	stuInit(s, num);
	printf("The student is below: \n");
	stuDisplay(s, num);
	free(s);
	s = NULL;
	system("pause");
	return 0;
}