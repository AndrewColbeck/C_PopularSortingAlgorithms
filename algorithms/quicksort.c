#include "sorting-algorithms.h"

int partition(int a[], int L, int R)
{
 	// This loop will re-arrange elements < or > than pivot
	// so that if they are less they'll be on the left, and greater will 
	// be on the right.  On the final call, the pivot will be placed in 
	// the middle, and it's position (marked by pindex) will be returned.

    int pivot = a[R];
    int pindex = L-1;
    // Initialise pindex so that left most element will be
    // included in calculation
    int hold;
    int i;

    for (i = L; i <= R; i++)
    {
        if (a[i] <= pivot) 
        {
        	// If element a[i] <= pivot, swap with element
        	// at pindex location
	        pindex++;
	        // pindex = element in question's position in array
	        hold = a[pindex];
	        a[pindex] = a[i];
	        a[i] = hold;
	        printArray(a, R+1);
        }
    }
	return(pindex);
}

void quickSort(int a[], int L, int R)
{
	int pindex; 
	// pindex will mark the final location of pivot
	// after each recursive call

	if ( L < R )
	{
		pindex = partition(a, L, R);
			// All elements < pivot will now be on left,
			// All elements > pivot will now be on right.
		quickSort(a, L, pindex-1);
			// Recursively quicksort elements left of new pivot point
		quickSort(a, pindex+1, R);
			// Recursively quicksort elements right of the new pivot point
	}
}