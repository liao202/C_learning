#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char arr1[] = "abc";
	char arr2[3] = { 'a', 'b', 'c' };
	int i = 0;
	for (i = 0; i < 4; ++i)
	{
		printf("%d\n", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 3; ++i)
	{
		printf("%d\n", arr2[i]);
	}

	//int count = 10;
	//int arr[count] = { 0 };
	system("pause");
	return 0;
}