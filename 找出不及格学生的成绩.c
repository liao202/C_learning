/*
**	�ҳ�������ѧ���ĳɼ�,ÿ��ѧ�������ſγ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define M 5
#define N 4

/*---������ָ�����p��ָ�����Ƿ��в�����---*/
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
	/*---����N��ѧ�����ſεĳɼ�---*/
	for (int i = 0; i < M; ++i)
	{
		printf("������ No.%d �ɼ�: \n", i + 1);
		for (int j = 0; j < N; ++j)
		{
			scanf("%lf", &score[i][j]);
		}
	}
	/*---һ��һ�еļ��ɼ�---*/
	for (int i = 0; i < M; ++i)
	{
		p = search(score + i);
		if (p == *(score + i))
		{
			printf("No.%d �ɼ�: \n", i);
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