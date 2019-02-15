#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//-------------------------------------------------------------	//
//					** PROTOTYPES **							//
//-------------------------------------------------------------	//

void printArray(int a[], int array_size);
void randomiseArray(int a[], int array_size);
void bubbleSort(int a[], int array_size);
void selectionSort(int a[], int array_size);
void insertionSort (int a[], int array_size);
void merge(int a[], int start, int size);
void mergeSort(int a[], int i, int j);
int partition(int A[], int L, int R);
void quickSort(int A[], int L, int R);