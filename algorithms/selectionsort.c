#include "sorting-algorithms.h"

void selectionSort(int a[], int array_size)
{
	int i, j, min, temp, local_n=0;
	
	for (i = 0; i < array_size - 1; i++)
	{
		//array_size - 1 is in place to save time, see above note
		min = i;
		//min is the array element number that holds the minimum value
		
		for (j = i+1; j < array_size; j++)
		{
			//start j at element 1, because currently a[min] = a[0],
			//thus it is optimal not to compare two identical values
			if (a[j] < a[min])
				min = j;
			//min will inevitably hold address of lowest value
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
			//a[i] will now hold the minimum value.
		local_n++;
		printArray(a, array_size);		

	}
	printf("Final Array:\n");
	printArray(a, array_size);
}