#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void additiveEquation()
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (a = 0; a < 10; ++a)
	{
		for (b = 0; b < 10; ++b)
		{
			for (c = 0; c < 10; ++c)
			{
				if (100 * a + 10 * b + c + 100 * b + 10 * c + c == 532)
				{
					printf("%d%d%d + %d%d%d = 532. ",
						a, b, c, b, c, c);
					printf("The a, b, c is: a = %d, b = %d, c = %d.\n",
						a, b, c);
				}
			}
		}
	}
}

int main()
{
	printf("The result is: \n");
	additiveEquation();
	system("pause");
	return 0;
}