//  [11/25/2018 ��ʰ������]

/*
 *	һ��������ֻ��һ����������һ��
 *	���������ǳɶԳ��ֵ�,�ҳ������
 */

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
	int result = 0;
	/*---������Ԫ�ظ���---*/
	int size = sizeof(arr) / sizeof(arr[0]);
	result = arr[0];
	for (int i = 1; i < size; ++i)
	{
		/*---������Ԫ���������,�ų���ͬ��Ԫ��---*/
		result ^= arr[i];
	}
	printf("%d\n", result);
	system("pause");
	return 0;
}