#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int* howManyAnimals(int feet)
{
	int* ret = (int*)malloc(sizeof(int) * 2);
	if (feet % 4 == 0)
	{
		ret[0] = feet / 4;
	}
	else
	{
		int num4 = feet / 4;
		ret[0] = num4 + (feet - num4 * 4) / 2;
	}
	ret[1] = feet / 2;
	return ret;
}

int main()
{
	int feet = 0;
	int i = 0;
	int* num = NULL;
	printf("Please input the number of the feet: \n");
	scanf("%d", &feet);
	num = howManyAnimals(feet);
	for (i = 0; i < 2; ++i)
	{
		printf("%d animals!\n", num[i]);
	}
	system("pause");
	return 0;
}