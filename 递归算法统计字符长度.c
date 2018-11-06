#include "stdio.h"
#include "stdlib.h"

int Strlen(char str[])
{
	if (str[0] == '\0')
	{
		return 0;
	}
	return Strlen(str + 1) + 1;
}

int main()
{
	char str[] = "abcd";
	printf("%d\n", Strlen(str));
	system("pause");
	return 0;
}