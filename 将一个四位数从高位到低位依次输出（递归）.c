#include "stdio.h"
#include "stdlib.h"

void print_num(int x)
{
	if (x > 9)
	{
		print_num(x / 10);
	}
	printf("%d ", x % 10);
}

int main()
{
	print_num(1234);
	system("pause");
	return 0;
}