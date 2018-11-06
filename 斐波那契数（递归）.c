#include "stdio.h"
#include "stdlib.h"

int fibonacci_number(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return fibonacci_number(n - 1) + fibonacci_number(n - 2);
}

int main()
{
	printf("%d\n", fibonacci_number(6));
	system("pause");
	return 0;
}