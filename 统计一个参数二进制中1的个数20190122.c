#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int countOneBit(int n)
{
	int ret = 0;
	for (int i = 0; i < 32; ++i)
	{
		if (((n >> i) & 1) == 1)
		{
			++ret;
		}
	}
	return ret;
}

int main()
{
	int cnt_bit_one = 0;
	int num = 0;
	
	printf("������һ����: \n");
	scanf("%d", &num);
	cnt_bit_one = countOneBit(num);
	printf("%d�Ķ�����λ����%d��1.\n",
		num, cnt_bit_one);

	system("pause");
	return 0;
}