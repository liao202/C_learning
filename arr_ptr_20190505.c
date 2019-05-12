#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int randomNubmer(){
	return 11 + rand() % (99 - 11 + 1);
}

static void arrInit(int(*arr)[4], int row, int col){
	int i, j;

	for(i = 0; i < row; ++i){
		for(j = 0; j < col; ++j){
			arr[i][j] = randomNubmer();
		}
	}
}

static void arrDisplay(int(*arr)[4], int row, int col){
	int i, j;

	for(i = 0; i < row; ++i){
		for(j = 0; j < col; ++j){
			printf("%-5d", arr[i][j]);
		}
		printf("\n");
	}
}

int main(){
	srand((unsigned int)time(0));

	int arr[3][4] = {0};

	arrInit(arr, 3, 4);

	printf("The array is: \n");
	arrDisplay(arr, 3, 4);

	return 0;
}
