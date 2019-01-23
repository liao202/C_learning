#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char killer = 0;

	for (killer = 'a'; killer <= 'd'; ++killer)
	{
		if ((killer != 'a') +
			(killer == 'c') + 
			(killer == 'd') +
			(killer != 'd') == 3)
		{
			printf("killer is %c!\n",
				killer);
		}
	}

	system("pause");
	return 0;
}