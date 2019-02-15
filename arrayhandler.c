#include "algorithms/sorting-algorithms.h"

//-------------------------------------------------------------	//
//					** ARRAY HANDLER **							//
//-------------------------------------------------------------	//

void printArray(int a[], int array_size)
{
	int i;
	for (i = 0; i < array_size; i++)
		printf("%i ", a[i]);
	printf("\n");
}

void randomiseArray(int a[], int array_size)
{
	int i;
	srand(time(NULL));
	printf("-------------------------\n");
	printf("Reset the Array to:\n");
	for (i = 0; i < array_size; i++)
		a[i] = (rand()%9+1);
		//a[i] = 10-i;
	printArray(a, array_size);
}