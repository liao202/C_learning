/*
**	�޷������͵����С����
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/*---�޷��ź��з��űȽϳ��ֵĴ���---*/
//int main()
//{
	//int a = -1;
	//unsigned int b = 1;
	///*---�ɽ�if�����еı���b������ǿ��ת��Ϊint��---*/
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

/*---�޷��ż�������Ĵ���---*/
/*---��������������Ԫ��֮��---*/
//double sumElements(double arr[], unsigned int length)
//{
//	double sum = 0;
//	/*---��lengthΪ0ʱ, i <= Umax, Խ�����---*/
//	/*---���м��ж�������Ϊi < length---*/
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

/*---�ж�һ���ַ����Ƿ���, ��, ����1, ����, ����0---*/
int strLonger(char* str1, char* str2)
{
	return (strlen(str1) - strlen(str2)) > 0;
}

/*
**	�������
**	str1: he��str2: hello��!
**	��������Ǵ��
**	ԭ��size_t strlen ( const char * str );
**	strlen�ķ���ֵ���޷�������
**	(strlen(str1) - strlen(str2)) > 0;
**	�Ὣ>��ߵı��ʽת��Ϊunsigned int����
**	���½������
**	ֻ��str1��str2������ȵ�ʱ�򷵻ؼ�
**	����ʱ�򶼷�����
*/

int main()
{
	int flag = 0;
	char* str1 = "he";
	char* str2 = "hello";
	flag = strLonger(str1, str2);
	if (flag == 1)
	{
		printf("str1: %s��str2: %s��!\n", str1, str2);
	}
	else
	{
		printf("str1: %s��str2: %s��!\n", str1, str2);
	}
	system("pause");
	return 0;
}