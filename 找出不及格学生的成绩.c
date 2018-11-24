/*
**	找出不及格学生的成绩,每名学生有四门课程
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define M 5
#define N 4

/*---查找行指针变量p所指的行是否有不及格---*/
double* search(double(*p)[N])
{
	double* pt = NULL;
	for (int i = 0; i < N; ++i)
	{
		if (*(*p + i) < 60)
		{
			pt = *p;
		}
	}
	return pt;
}

int main()
{
	double score[M][N];
	double* p;
	/*---输入N个学生四门课的成绩---*/
	for (int i = 0; i < M; ++i)
	{
		printf("请输入 No.%d 成绩: \n", i + 1);
		for (int j = 0; j < N; ++j)
		{
			scanf("%lf", &score[i][j]);
		}
	}
	/*---一行一行的检查成绩---*/
	for (int i = 0; i < M; ++i)
	{
		p = search(score + i);
		if (p == *(score + i))
		{
			printf("No.%d 成绩: \n", i);
			for (int j = 0; j < N; ++j)
			{
				printf("%.2f ", *(p + j));
			}
		}
	}
	printf("\n");
	system("pause");
	return 0;
}