/*
**	˭��С͵���鷽��
**	A˵:Bû��͵,��D͵��
**	B˵:��û��͵,��C͵��
**	C˵:Aû��͵,��B͵��
**	D˵:��û��͵
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

int main()
{
	/*---�ĸ�Ԫ�ر�ʾABCD,ֵΪ1��С͵,ֵΪ0����С͵---*/
	int arr[4] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		/*---�����i����ΪС͵,�����˲���---*/
		for (int j = 0; j < 4; j++)
		{
			if (j == i)
			{
				arr[j] = 1;
			}
			else
			{
				arr[j] = 0;
			}
			/*---�ж����ּ����������Ƿ�����---*/
			if (arr[1] + arr[3] == 1 &&
				arr[1] + arr[2] == 1 &&
				arr[0] + arr[1] == 1)
			{
				printf("The thief is %c.\n", i + 'A');
			}
		}
	}
	system("pause");
	return 0;
}