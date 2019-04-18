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

static void merge(int arr[], int left, int mid, int right){
	int temp[N] = { 0 };
	int i = left, j = mid + 1, k = left;

	while (i < mid + 1 && j < right + 1){
		if (arr[i] > arr[j]){
			temp[k++] = arr[j++];
		}
		else{
			temp[k++] = arr[i++];
		}
	}

	while (i < mid + 1){
		temp[k++] = arr[i++];
	}

	while (j < right + 1){
		temp[k++] = arr[j++];
	}

	for (i = left; i <= right; ++i){
		arr[i] = temp[i];
	}
}

static void mSort(int arr[], int left, int right){
	if (left < right){
		int mid = left + (right - left) / 2;
		mSort(arr, left, mid);
		mSort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

void mergeSort(int arr[], int len){
	mSort(arr, 0, len - 1);
}

void mergeSortTest(){
	srand((unsigned int)time(0));

	int arr[N] = { 0 };

	arrInit(arr, N);

	printf("The origin array is: \n");
	arrDisplay(arr, N);

	mergeSort(arr, N);

	printf("The sorted array is: \n");
	arrDisplay(arr, N);
}