#include "main.h"

/**
 * swap_int - swaps values of two integers
 *
 * @a: first int to be swapped
 * @b: second int to swapped
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
