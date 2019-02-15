#include "sorting-algorithms.h"

void bubbleSort(int a[], int array_size)
{
	int i, j, temp, local_n=0;
	for (i = 0; i < (array_size - 1); i++)
	{
		//Bubble Sort Loop:
		//array - 1 (saves the process of checking array[0] with array[0]
		
		for (j = 0; j < array_size - 1 - i; j++)
		{
			//- 1 - i is in place to save time; no need to search
			//the last element (after second sort, no need to search
			//last 2 elements, etc, incrementally)
			if (a[j] > a[j+1])
			{
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
				local_n++;
				printArray(a, array_size);
			}
		}
	}

	printf("Final Array:\n");
	printArray(a, array_size);
}