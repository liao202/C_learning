#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1024

int main()
{
	char str[N] = "banana";
	char ret[N] = { 0 };
	printf("The origin string is: %s\n", str);
	int i = 0;
	int j = 0;
	int len1 = strlen(str);
	int len2 = 0;
	for (i = 0; i < len1; ++i)
	{
		int flag = 1;
		for (j = 0; j < len2; ++j)
		{
			if (str[i] == ret[j])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			ret[len2] = str[i];
			++len2;
		}
	}
	ret[len2] = '\0';
	printf("The string after remove duplicate char is: %s\n",
		ret);
	system("pause");
	return 0;
}