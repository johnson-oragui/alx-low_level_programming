#include "main.h"
#include <stdio.h>
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

	for(i = n - 1; i >= 0; i--)
	{
		if(i != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}

	printf("\n");
}
