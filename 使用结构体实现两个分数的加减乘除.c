/*
**	ʹ�ýṹ��ʵ�����������ļӼ�
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

/*---�����ṹ��---*/
struct fenshu
{
	int fenzi;
	int fenmu;
};

/*---��n1��n2�����Լ��---*/
int gcd(int n1, int n2)
{
	int gcd = 1;
	for (int i = 1; i <= min(n1, n2); ++i)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			gcd = i;
		}
	}
	return gcd;
}

/*---������ӵĺ���---*/
struct fenshu fenshu_add(struct fenshu f1, struct fenshu f2)
{
	struct fenshu f;
	int x = 0;
	int y = 0;
	x = f1.fenzi * f2.fenmu + f1.fenmu * f2.fenzi;
	y = f1.fenmu * f2.fenmu;
	f.fenzi = x / gcd(abs(x), y);
	f.fenmu = y / gcd(abs(x), y);
	return f;
}

/*---��������ĺ���---*/
struct fenshu fenshu_sub(struct fenshu f1, struct fenshu f2)
{
	struct fenshu f;
	int x = 0;
	int y = 0;
	x = f1.fenzi * f2.fenmu - f1.fenmu * f2.fenzi;
	y = f1.fenmu * f2.fenmu;
	f.fenzi = x / gcd(abs(x), y);
	f.fenmu = y / gcd(abs(x), y);
	return f;
}

/*---������˵ĺ���---*/
struct fenshu fenshu_mul(struct fenshu f1, struct fenshu f2)
{
	struct fenshu f;
	int x = 0;
	int y = 0;
	x = f1.fenzi * f2.fenzi;
	y = f1.fenmu * f2.fenmu;
	f.fenzi = x / gcd(abs(x), y);
	f.fenmu = y / gcd(abs(x), y);
	return f;
}

/*---��������ĺ���---*/
struct fenshu fenshu_div(struct fenshu f1, struct fenshu f2)
{
	struct fenshu f;
	int x = 0;
	int y = 0;
	x = f1.fenzi * f2.fenmu;
	y = f1.fenmu * f2.fenzi;
	f.fenzi = x / gcd(abs(x), y);
	f.fenmu = y / gcd(abs(x), y);
	return f;
}

int main()
{
	struct fenshu f1, f2;
	struct fenshu add_result, sub_result;
	struct fenshu mul_result, div_result;
	printf("���������f1�ķ��Ӻͷ�ĸ: \n");
	scanf("%d %d", &f1.fenzi, &f1.fenmu);
	printf("���������f2�ķ��Ӻͷ�ĸ: \n");
	scanf("%d %d", &f2.fenzi, &f2.fenmu);
	add_result = fenshu_add(f1, f2);
	sub_result = fenshu_sub(f1, f2);
	mul_result = fenshu_mul(f1, f2);
	div_result = fenshu_div(f1, f2);
	printf("���Ӻ�Ϊ:%d / %d\n", add_result.fenzi, add_result.fenmu);
	printf("���Ӳ�Ϊ:%d / %d\n", sub_result.fenzi, sub_result.fenmu);
	printf("���ӻ�Ϊ:%d / %d\n", mul_result.fenzi, mul_result.fenmu);
	printf("������Ϊ:%d / %d\n", div_result.fenzi, div_result.fenmu);
	system("pause");
	return 0;
}