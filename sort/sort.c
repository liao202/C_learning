#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"

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

static void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int len){
	int bound, cur;

	for (bound = 0; bound < len; ++bound){
		for (cur = len - 1; cur > bound; --cur){
			if (arr[cur] < arr[cur - 1]){
				swap(&arr[cur], &arr[cur - 1]);
			}
		}
	}
}

static void qSort(int arr[], int left, int right){
	if (left > right){
		return;
	}

	int i = left;
	int j = right;
	int value = arr[left];

	while (i < j){
		while (i < j && arr[j] >= value){
			--j;
		}
		arr[i] = arr[j];

		while (i < j && arr[i] <= value){
			++i;
		}
		arr[j] = arr[i];
	}
	arr[i] = value;
	qSort(arr, left, i - 1);
	qSort(arr, i + 1, right);
}

void quickSort(int arr[], int len){
	int left = 0, right = len - 1;

	qSort(arr, left, right);
}

void insertSort(int arr[], int len){
	int i, j, temp;

	for (i = 1; i < len; ++i){
		if (arr[i] < arr[i - 1]){
			temp = arr[i];
			for (j = i - 1; j >= 0 && arr[j] > temp; --j){
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
	}
}

void shellSort(int arr[], int len){
	int i, j, k, gap, temp;

	for (gap = len / 2; gap > 0; gap /= 2){
		for (i = 0; i < gap; ++i){
			for (j = i + gap; j < len; j += gap){
				if (arr[j] < arr[j - gap]){
					temp = arr[j];
					for (k = j - gap; k >= 0 && arr[k] > temp; k -= gap){
						arr[k + gap] = arr[k];
					}
					arr[k + gap] = temp;
				}
			}
		}
	}
}

void selectSort(int arr[], int len){
	int i, j, min;

	for (i = 0; i < len; ++i){
		min = i;
		for (j = i + 1; j < len; ++j){
			if (arr[min] > arr[j]){
				min = j;
			}
		}
		if (min != i){
			swap(&arr[min], &arr[i]);
		}
	}
}

static void downAdjust(int arr[], int len, 
	int root_index){
	int left_index = 2 * root_index + 1;
	if (left_index >= len){
		return;
	}

	int right_index = 2 * root_index + 2;
	int max_index = left_index;
	if (right_index < len && arr[right_index] > arr[left_index]){
		max_index = right_index;
	}

	if (arr[root_index] >= arr[max_index]){
		return;
	}

	swap(&arr[root_index], &arr[max_index]);

	downAdjust(arr, len, max_index);
}

static void createHeap(int arr[], int len){
	int i = 0;

	for (i = (len - 1 - 1) / 2; i >= 0; --i){
		downAdjust(arr, len, i);
	}
}

void heapSort(int arr[], int len){
	createHeap(arr, len);

	int i = 0;
	for (i = 0; i < len; ++i){
		swap(&arr[0], &arr[len - 1 - i]);

		downAdjust(arr, len - 1 - i, 0);
	}
}

static void merge(int arr[], int temp[], 
	int left, int mid, int right){
	int i = left, j = mid + 1, k = left;

	while (i != mid + 1 && j != right + 1){
		if (arr[i] > arr[j]){
			temp[k++] = arr[j++];
		}
		else{
			temp[k++] = arr[i++];
		}
	}

	while (i != mid + 1){
		temp[k++] = arr[i++];
	}

	while (j != right + 1){
		temp[k++] = arr[j++];
	}

	for (i = left; i <= right; ++i){
		arr[i] = temp[i];
	}
}

static void mSort(int arr[], int temp[], 
	int left, int right){
	if (left < right){
		int mid = left + (right - left) / 2;
		mSort(arr, temp, left, mid);
		mSort(arr, temp, mid + 1, right);
		merge(arr, temp, left, mid, right);
	}
}

void mergeSort(int arr[], int len){
	int temp[N] = { 0 };
	int left = 0, right = len - 1;

	mSort(arr, temp, left, right);
}

void sortTest(){
	srand((unsigned int)time(0));

	int arr[N] = { 0 };
	Sort sort_func[7] = {
		bubbleSort, quickSort,
		insertSort, shellSort,
		selectSort, heapSort,
		mergeSort
	};

	arrInit(arr, N);

	printf("The origin array is: \n");
	arrDisplay(arr, N);

	int choose = 0;
	printf("Please choose the sort function: \n");
	printf("1.bubble 2.quick 3.insert 4.shell"
		" 5.select 6.heap 7.merge\n");
	scanf("%d", &choose);

	sort_func[choose](arr, N);

	printf("The sorted array is: \n");
	arrDisplay(arr, N);
}