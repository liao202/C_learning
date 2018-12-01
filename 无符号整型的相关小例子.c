/*
**	无符号整型的相关小例子
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/*---无符号和有符号比较出现的错误---*/
//int main()
//{
	//int a = -1;
	//unsigned int b = 1;
	///*---可将if条件中的变量b的类型强制转化为int型---*/
	//if (a > b)
	//{
	//	printf("a > b, a = %d, b = %u\n", a, b);
	//}
	//else
	//{
	//	printf("a <= b, a = %d, b = %u\n", a, b);
	//}
//	system("pause");
//	return 0;
//}

/*---无符号减法引起的错误---*/
/*---计算数组中所有元素之和---*/
//double sumElements(double arr[], unsigned int length)
//{
//	double sum = 0;
//	/*---当length为0时, i <= Umax, 越界访问---*/
//	/*---将中间判断条件改为i < length---*/
//	for (unsigned int i = 0; i <= length - 1; ++i)
//	{
//		sum += arr[i];
//	}
//	return sum;
//}
//
//int main()
//{
//	double result = 0;
//	double arr[] = { 1, 3, 4.1 };
//	result = sumElements(arr, 0);
//	printf("%f\n", result);
//	system("pause");
//	return 0;
//}

/*---判断一个字符串是否长于, 是, 返回1, 不是, 返回0---*/
int strLonger(char* str1, char* str2)
{
	return (strlen(str1) - strlen(str2)) > 0;
}

/*
**	结果如下
**	str1: he比str2: hello长!
**	结果明显是错的
**	原因size_t strlen ( const char * str );
**	strlen的返回值是无符号整型
**	(strlen(str1) - strlen(str2)) > 0;
**	会将>左边的表达式转换为unsigned int类型
**	导致结果出错
**	只有str1和str2长度相等的时候返回假
**	其他时候都返回真
*/

int main()
{
	int flag = 0;
	char* str1 = "he";
	char* str2 = "hello";
	flag = strLonger(str1, str2);
	if (flag == 1)
	{
		printf("str1: %s比str2: %s长!\n", str1, str2);
	}
	else
	{
		printf("str1: %s比str2: %s短!\n", str1, str2);
	}
	system("pause");
	return 0;
}