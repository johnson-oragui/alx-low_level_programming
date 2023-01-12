#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - allocates  memory using malloc
 * @b: value to allocate memory
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *bb;

	bb = malloc(b);

	if (bb == NULL)
	{
		exit(98);
	}
	return (bb);
}
