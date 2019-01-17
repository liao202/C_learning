/*
**	memmove������ģ��ʵ��
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "assert.h"

#define LEN 20

//�����
int randomNumber()
{
	return 11 + rand() % (99 - 11 + 1);
}

//�����ʼ��
void arrInit(int arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		arr[i] = randomNumber();
	}
}

//�����ӡ
void arrDisplay(int arr[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		if (i % 10 == 0)
		{
			printf("\n");
		}
		printf("%-5d", arr[i]);
	}
	printf("\n");
}

//�ڴ濽��, ���ǻ������غϵ�����
int* myMemmove(int* dest, const int* src, int num)
{
	assert(dest != NULL);
	assert(src != NULL);
	assert(num >= 0);
	char* p1 = (char*)dest;
	char* p2 = (char*)src;
	if (dest >= src && dest <= (src + num))
	{
		//���ſ���
		for (int i = (num - 1) * 4; i >= 0; --i)
		{
			*(p1 + i) = *(p2 + i);
		}
	}
	else
	{
		for (int i = 0; i < num * (int)sizeof(int); ++i)
		{
			*(p1 + i) = *(p2 + i);
		}
	}
	return dest;
}

int main()
{
	srand((unsigned int)time(0));
	int arr1[LEN] = { 0 };
	int arr2[LEN] = { 0 };
	arrInit(arr2, LEN);
	printf("����1��ӡ����: ");
	arrDisplay(arr1, LEN);
	printf("����2��ӡ����: ");
	arrDisplay(arr2, LEN);
	myMemmove(arr1, arr2, LEN * sizeof(int));
	printf("�����������1��ӡ����: ");
	arrDisplay(arr1, LEN);
	printf("�����������2��ӡ����: ");
	arrDisplay(arr2, LEN);
	system("pause");
	return 0;
}