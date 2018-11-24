/*
**	使用结构体实现两个分数的加减
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

/*---分数结构体---*/
struct fenshu
{
	int fenzi;
	int fenmu;
};

/*---求n1和n2的最大公约数---*/
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

/*---分数相加的函数---*/
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

/*---分数相减的函数---*/
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

/*---分数相乘的函数---*/
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

/*---分数相除的函数---*/
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
	printf("请输入分数f1的分子和分母: \n");
	scanf("%d %d", &f1.fenzi, &f1.fenmu);
	printf("请输入分数f2的分子和分母: \n");
	scanf("%d %d", &f2.fenzi, &f2.fenmu);
	add_result = fenshu_add(f1, f2);
	sub_result = fenshu_sub(f1, f2);
	mul_result = fenshu_mul(f1, f2);
	div_result = fenshu_div(f1, f2);
	printf("分子和为:%d / %d\n", add_result.fenzi, add_result.fenmu);
	printf("分子差为:%d / %d\n", sub_result.fenzi, sub_result.fenmu);
	printf("分子积为:%d / %d\n", mul_result.fenzi, mul_result.fenmu);
	printf("分子商为:%d / %d\n", div_result.fenzi, div_result.fenmu);
	system("pause");
	return 0;
}