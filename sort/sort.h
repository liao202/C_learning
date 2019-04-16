#pragma once

#define N 10

typedef void(*Sort)(int arr[], int len);

/*---√∞≈›≈≈–Ú---*/
void bubbleSort(int arr[], int len);

/*---øÏÀŸ≈≈–Ú---*/
void quickSort(int arr[], int len);

/*---≤Â»Î≈≈–Ú---*/
void insertSort(int arr[], int len);

/*---œ£∂˚≈≈–Ú---*/
void shellSort(int arr[], int len);

/*---—°‘Ò≈≈–Ú---*/
void selectSort(int arr[], int len);

/*---∂—≈≈–Ú---*/
void heapSort(int arr[], int len);

/*---πÈ≤¢≈≈–Ú---*/
void mergeSort(int arr[], int len);

/*---≤‚ ‘---*/
void sortTest();