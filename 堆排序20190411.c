#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

static int randomNumber(){
	return 1 + rand() % (9 - 1 + 1);
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
		printf("%d ", arr[i]);
	}
	printf("\n");
}

static void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

static void downwardAdjustment(int arr[], int len, int root_size){
	int left_index = 2 * root_size + 1;

	if (left_index >= len){
		return;
	}

	int right_index = 2 * root_size + 2;
	int max_index = left_index;

	if (right_index < len && arr[right_index] > arr[left_index]){
		max_index = right_index;
	}

	if (arr[root_size] >= arr[max_index]){
		return;
	}

	swap(&arr[root_size], &arr[max_index]);

	downwardAdjustment(arr, len, max_index);
}

static void createHeap(int arr[], int len){
	int i = 0;

	for (i = (len - 1 - 1) / 2; i >= 0; --i){
		downwardAdjustment(arr, len, i);
	}
}

static heapSort(int arr[], int len){
	createHeap(arr, len);

	int i = 0;

	for (i = 0; i < len; ++i){
		swap(&arr[0], &arr[len - 1 - i]);

		downwardAdjustment(arr, len - 1 - i, 0);
	}
}

void heapSortTest(){
	int arr[N] = { 0 };

	arrInit(arr, N);
	printf("The origin array is: \n");
	arrDisplay(arr, N);

	heapSort(arr, N);
	printf("The array after heap sort is: \n");
	arrDisplay(arr, N);
}