#include "sorting-algorithms.h"

void insertionSort (int a[], int array_size)
{
	int i, index, j, local_n=0;

		for (i = 1; i < array_size; i++)
	{
		index = a[i];
		//Index [i] is sampled for comparision at [j] and [j-1]

		for (j = i; j > 0 && a[j-1] > index; j--)
		{
			//If [j] = 0, inner loop ends
			//else check if a[j-1] is greater than index
			//If true, a[j] becomes a[j-1]
			a[j] = a[j-1];
			local_n++;
			printArray(a, array_size);
		}

		a[j] = index;
			//if [j] was not bigger than index,
			//index is inserted at [j]
	}
	
	printf("Final Array:\n");
	printArray(a, array_size);
	
	printf("\n");
}