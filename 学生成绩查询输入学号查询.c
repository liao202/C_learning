/*
**	����ѧ��ѧ�Ų�ѯѧ���ɼ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---Mѧ������---*/
#define M 4
/*---�γ�����---*/
#define N 3

/*---����ѧ�Ų�ѯ�ɼ�,����������---*/
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
	printf("������ѧ��ѧ��: \n");
	scanf("%d", &num);
	student_ptr = score_search(student_score, num - 1);
	printf("No.%dѧ���ĳɼ�����: \n", num);
	for (int i = 0; i < N; ++i)
	{
		printf("%-5.1f", *(student_ptr + i));
	}
	printf("\n");
	system("pause");
	return 0;
}