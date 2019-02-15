#include "sorting-algorithms.h"

void merge(int a[], int start, int size)
{
    int mid, Li, Ri, *temparray, k=0;
    	
    mid = (start+size)/2;
    	// Find the middle (index) element
    Li = start;
    Ri = mid+1;
    	// Set scope for new array 
    	// i.e. on initial run, Li counter = 0, and Ri counter = 6
    temparray = (int*)malloc(sizeof((size-start+1)));
    
    while ( Li <= mid && Ri <= size ) 
    {
    	// While Li & Ri are within scope of the array,
    	// establish lowest value and populate new array in asc.
        if ( a[Li] > a[Ri] )
	        {
	            temparray[k] = a[Ri];
	            k++;
	            Ri++;
	        }
    	else
        	{                    
            	temparray[k] = a[Li];
            	k++;
            	Li++;
			}
    }

    while ( Li <= mid ) 
    {
        // If Li didn't reach mid in the last while loop,
        // Attach any left over elements to end of array.
        temparray[k] = a[Li];
        k++;
        Li++;
	}

    while ( Ri <= size ) 
    {
        // See note in previous while loop, applies to Ri.
        temparray[k] = a[Ri];
        k++;
        Ri++;
    }

    for ( Li = 0; Li < (size-start+1); Li++ )
    {    
    	// Copy the temp array (now ordered) into a[]
        a[start+Li] = temparray[Li];
    }

    printArray(a, size+1);
}

void mergeSort(int a[], int i, int j)
{
    int mid = (i+j) / 2;

    if (i >= j) 
    {
    	printArray(a, j+1);    			
    	return;
    }
    mergeSort(a, i, mid);
    mergeSort(a, mid+1, j);
    merge(a, i, j);
    return;
}