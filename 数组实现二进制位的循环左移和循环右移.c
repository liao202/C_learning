/*
**	������λ��ѭ�����ƺ�ѭ������
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN sizeof(unsigned int) * 8

/*---ʮ����ת������,�������Ʒ���������---*/
void ten_two(int arr[], unsigned int n)
{
	for (int i = LEN - 1; i >= 0; --i)
	{
		arr[i] = n % 2;
		n /= 2;
	}
}

/*---�����еĶ�����λ��ӡ---*/
void bit_arr_display(int arr[])
{
	for (int i = 0; i < LEN; ++i)
	{
		printf("%-2d", arr[i]);
	}
	printf("\n");
}

/*---ѭ������---*/
void move_right(int arr[], int n)
{
	int temp = 0;
	/*---����nλ---*/
	for (int i = n; i > 0; --i)
	{
		temp = arr[LEN - 1];
		for (int j = 1; j < LEN; ++j)
		{
			arr[LEN - j] = arr[LEN - j - 1];
		}
		arr[0] = temp;
	}
}

/*---ѭ������---*/
void move_left(int arr[], int n)
{
	int temp = 0;
	/*---����nλ---*/
	for (int i = n; i > 0; --i)
	{
		temp = arr[0];
		for (int j = LEN; j > 1; --j)
		{
			arr[LEN - j] = arr[LEN - j + 1];
		}
		arr[LEN - 1] = temp;
	}
}

int main()
{
	unsigned int number = 0;
	int bit_arr[LEN] = { 0 };
	int n = 0;
	printf("�������޷�����������: \n");
	scanf("%u", &number);
	ten_two(bit_arr, number);
	printf("%d�Ķ�������ʽ����: \n", number);
	/*---��ӡnumber�Ķ�������ʽ---*/
	bit_arr_display(bit_arr);
	printf("������ѭ�����Ƶ�λ��: \n");
	scanf("%d", &n);
	/*---ѭ������nλ---*/
	move_left(bit_arr, n);
	printf("ѭ������%dλ��Ľ������: \n", n);
	/*---��ӡnumber�Ķ�������ʽ---*/
	bit_arr_display(bit_arr);
	printf("������ѭ�����Ƶ�λ��: \n");
	scanf("%d", &n);
	/*---ѭ������nλ---*/
	move_right(bit_arr, n);
	printf("ѭ������%dλ��Ľ������: \n", n);
	/*---��ӡnumber�Ķ�������ʽ---*/
	bit_arr_display(bit_arr);
	system("pause");
	return 0;
}