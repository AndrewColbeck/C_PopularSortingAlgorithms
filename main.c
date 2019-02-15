
// This Program will demonstrate 5 popular sorting algorithms: 
// Bubble Sort, Insertion Sort, Mergesort, Quicksort and Selection Sort. 
// By Andrew Colbeck 2017

/* To Compile:
	gcc -o a main.c algorithms/bubblesort.c algorithms/insertionsort.c 
	algorithms/mergesort.c algorithms/quicksort.c algorithms/selectionsort.c 
	arrayhandler.c 
*/
#include "algorithms/sorting-algorithms.h"

//-------------------------------------------------------------	//
//					** MAIN PROGRAM **							//
//-------------------------------------------------------------	//

int main()
{
	int a[10], array_size=10, i;
	randomiseArray(a, array_size);
	
	printf("Bubble Sort iterations:\n");
	bubbleSort(a, array_size);
	printf("\n");

	printf("Selection Sort iterations:\n");
	randomiseArray(a, array_size);
	selectionSort(a, array_size);
	printf("\n");

	printf("Insertion Sort iterations:\n");
	randomiseArray(a, array_size);
	insertionSort(a, array_size);
	printf("\n");
	
	printf("Merge Sort iterations:\n");
	randomiseArray(a, array_size);
	mergeSort(a, 0, (array_size-1));
	printf("Final Array:\n");
	printArray(a, array_size);
	printf("\n");

	printf("Quick Sort iterations:\n");
	randomiseArray(a, array_size);
	quickSort(a, 0, (array_size-1));
	printf("Final Array:\n");
	printArray(a, array_size);
	printf("\n");
	
}