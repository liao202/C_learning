#pragma once

#define N 10

typedef void(*Sort)(int arr[], int len);

/*---ð������---*/
void bubbleSort(int arr[], int len);

/*---��������---*/
void quickSort(int arr[], int len);

/*---��������---*/
void insertSort(int arr[], int len);

/*---ϣ������---*/
void shellSort(int arr[], int len);

/*---ѡ������---*/
void selectSort(int arr[], int len);

/*---������---*/
void heapSort(int arr[], int len);

/*---�鲢����---*/
void mergeSort(int arr[], int len);

/*---����---*/
void sortTest();