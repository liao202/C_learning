#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int numberOfOne(int n)
{
	int cnt_of_one = 0;
	int i = 0;
	for (i = 0; i < 32; ++i)
	{
		if (((n >> i) & 1) == 1)
		{
			++cnt_of_one;
		}
	}
	return cnt_of_one;
}

int main()
{
	int num = 0;
	int cnt_of_one = 0;
	printf("Please enter the num: \n");
	scanf("%d", &num);
	cnt_of_one = numberOfOne(num);
	printf("%dÖÐÓÐ%d¸ö1\n", num, cnt_of_one);
	system("pause");
	return 0;
}