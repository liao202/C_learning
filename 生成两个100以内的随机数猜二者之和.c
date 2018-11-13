/*
** 随机生成两个100以内的数，猜二者之和
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main()
{
	srand((unsigned int)time(0));
	int random_number_1 = 0;
	int random_number_2 = 0;
	int sum = 0;
	/*---产生一个随机数在[0, 100]---*/
	random_number_1 = 0 + rand() % (100 - 0);
	random_number_2 = 0 + rand() % (100 - 0);
	printf("please enter the result of random_number_1 + random_number_2 :\n");
	scanf("%d", &sum);
	if (sum == random_number_1 + random_number_2)
	{
		printf("The result is right.\n");
	}
	else
	{
		printf("The result is wrong, the true result is %d", random_number_1 + random_number_2);
	}
	system("pause");
	return 0;
}