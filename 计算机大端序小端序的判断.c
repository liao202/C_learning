/*
**	��֤������Ǵ������С����
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a = 10;
	char* p = &a;
	/*
		��λ����ڸߵ�ַΪ�����
		��λ����ڵ͵�ַΪС����
	*/
	/*---�����ӡ���a�ĵ͵�ַ---*/
	/*---���Ϊ10,˵����С����---*/
	/*---���Ϊ0, ˵���Ǵ����---*/
	printf("%d\n", *p);
	system("pause");
	return 0;
}