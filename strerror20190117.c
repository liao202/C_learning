/*
**	strerror
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "errno.h"

int main()
{
	FILE* ptr_file;
	ptr_file = fopen("unexitst.ent", "r");
	if (ptr_file == NULL)
	{
		printf("Error opening file unexist.ent: %s\n",
			strerror(errno));
	}
	system("pause");
	return 0;
}