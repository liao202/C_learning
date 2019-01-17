/*
**	ͨ���������ʼ���������ӡ	
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define LEN 20
#define INTARR 1
#define DOUBLEARR 0

//�����
int randomNumber()
{
	return 11 + rand() % (99 - 11 + 1);
}

//���������
double randomFloatNumber()
{
	return randomNumber()
		+ randomNumber() * 0.1
		+ randomNumber() * 0.01;
}

void arrInit(void* arr, int len, int flag)
{
	for (int i = 0; i < len; ++i)
	{
		if (flag == 1)
		{
			*((int*)arr + i) = randomNumber();
		}
		else
		{
			*((double*)arr + i) = randomFloatNumber();
		}
	}
}

//�����ӡ
void arrDisplay(void* arr, int len, int flag)
{
	for (int i = 0; i < len; ++i)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		if (flag == 1)
		{
			printf("%-5d", *((int*)arr + i));
		}
		else
		{
			printf("%-7.2f", *((double*)arr + i));
		}
	}
	printf("\n");
}

int main()
{
	srand((unsigned int)time(0));
	int arr1[LEN] = { 0 };
	double arr2[LEN] = { 0 };
	arrInit(arr1, LEN, INTARR);
	arrInit(arr2, LEN, DOUBLEARR);
	printf("����1��ӡ����: ");
	arrDisplay(arr1, LEN, INTARR);
	printf("����2��ӡ����: ");
	arrDisplay(arr2, LEN, DOUBLEARR);
	system("pause");
	return 0;
}