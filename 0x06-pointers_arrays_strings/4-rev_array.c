#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - reverses the order of array
 *
 * @a: the array to be reversed
 * @n: lenght of array
 */
void reverse_array(int *a, int n)
{
	int i;

	int temp;

	for(int i = 0; i<n/2; i++)
	{
		temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}

	for(int i = 0; i < n; i++)
	{
		if(i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}

	printf("\n");
}
