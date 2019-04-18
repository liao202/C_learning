#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

static int randomNumber(){
	return 11 + rand() % (99 - 11 + 1);
}

static void arrInit(int arr[], int len){
	int i = 0;

	for (i = 0; i < len; ++i){
		arr[i] = randomNumber();
	}
}

static void arrDisplay(int arr[], int len){
	int i = 0;

	for (i = 0; i < len; ++i){
		printf("%-5d", arr[i]);
	}
	printf("\n");
}

static void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

static int partition1(int arr[], int left, int right){
	int i = left;
	int j = right;
	int pivot = arr[i];

	while (i < j){
		while (i < j && arr[j] >= pivot){
			--j;
		}

		while (i < j && arr[i] <= pivot){
			++i;
		}

		swap(&arr[i], &arr[j]);
	}

	swap(&arr[left], &arr[i]);
	return i;
}

static int partition2(int arr[], int left, int right){
	int i = left;
	int j = right;
	int pivot = arr[left];

	while (i < j){
		while (i < j && arr[j] >= pivot){
			--j;
		}
		arr[i] = arr[j];

		while (i < j && arr[i] <= pivot){
			++i;
		}
		arr[j] = arr[i];
	}
	arr[i] = pivot;
	return i;
}

static int partition3(int arr[], int left, int right){
	int d = left + 1;
	int i = left + 1;
	int pivot = arr[left];

	while (i <= right){
		if (arr[i] < pivot){
			swap(&arr[d], &arr[i]);
			++d;
		}
		++i;
	}

	swap(&arr[d - 1], &arr[left]);

	return d - 1;
}

static void qSort(int arr[], int left, int right){
	if (left > right){
		return;
	}

	if (left == right){
		return;
	}

	int pivot_index = partition2(arr, left, right);

	qSort(arr, left, pivot_index - 1);
	qSort(arr, pivot_index + 1, right);
}

void quickSort(int arr[], int len){
	qSort(arr, 0, len - 1);
}

void quickSortTest(){
	srand((unsigned int)time(0));

	int arr[N] = { 0 };

	arrInit(arr, N);

	printf("The origin array is: \n");
	arrDisplay(arr, N);

	quickSort(arr, N);

	printf("The sorted array is: \n");
	arrDisplay(arr, N);
}