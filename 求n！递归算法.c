#include "stdio.h"
#include "stdlib.h"

int factor(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n * factor(n - 1);
}

int main()
{
	printf("%d ", factor(5));
	system("pause");
	return 0;
}