#define _CRT_SECURE_NO_WARNINGS

//��iΪ����ʱ, i�����б������Ǻ���

#include <stdio.h>
#include <stdlib.h>

#define N 100

int main()
{
	int i = 0;
	int j = 0;
	int arr[N] = { 0 };

	for (i = 0; i < N; ++i)
	{
		arr[i] = i + 1;
	}
	//1��������, �����Ϊ0
	arr[0] = 0;
	//��2��ʼ�����ų�
	for (i = 1; i < N - 1; ++i)
	{
		for (j = i + 1; j < N; ++j)
		{
			if (arr[i] != 0 && arr[j] != 0)
			{
				if (arr[j] % arr[i] == 0)
				{
					arr[j] = 0;
				}
			}
		}
	}
	//ѭ����ӡ
	for (i = 0; i < N; ++i)
	{
		if (arr[i] != 0)
		{
			printf("%d\n", arr[i]);
		}
	}

	system("pause");
	return 0;
}