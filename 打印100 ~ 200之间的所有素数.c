/*
** 2018_10_23
*/

#include "stdio.h"
#include "math.h"
#include "stdlib.h"

int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	k = sqrt((double)i);
	for (i = 101; i < 201; i += 2)
	{
		for (j = 2; j <= k; j++)
		{
			if (i%j == 0)
				break;
		}
		if (j >= k + 1)
			printf("%5d", i);
	}
	system("pause");
	return 0;
}
