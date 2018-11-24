/*
**	输入学生学号查询学生成绩
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---M学生数量---*/
#define M 4
/*---课程数量---*/
#define N 3

/*---根据学号查询成绩,返回行向量---*/
double* score_search(double(*p)[3], int n)
{
	double* pt;
	pt = *(p + n);
	return pt;
}

int main()
{
	double student_score[M][N] = { { 67, 73, 60 },
	{ 77, 59, 88 }, { 78, 59, 88 }, {77, 88, 100} };
	int num = 0;
	double* student_ptr = NULL;
	printf("请输入学生学号: \n");
	scanf("%d", &num);
	student_ptr = score_search(student_score, num - 1);
	printf("No.%d学生的成绩如下: \n", num);
	for (int i = 0; i < N; ++i)
	{
		printf("%-5.1f", *(student_ptr + i));
	}
	printf("\n");
	system("pause");
	return 0;
}