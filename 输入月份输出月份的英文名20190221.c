#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define N 12

int main()
{
	char* month[N] = { "January", "February", "March",
		"Apral", "May", "June", "July", "August", "September",
		"October", "November", "December" };
	int mon = 0;
	printf("«Î ‰»Î‘¬∑›–Ú∫≈: \n");
	scanf("%d", &mon);
	printf("%s\n", month[mon - 1]);
	system("pause");
	return 0;
}