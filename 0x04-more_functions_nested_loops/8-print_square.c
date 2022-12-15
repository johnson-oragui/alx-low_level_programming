#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: size of square
 *
 * Description: can only use _putchar to print
 */
void print_square(int size)
{
	int i, j;

	if (i < 1)
		_putchar('\n');

	i = 0;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar(#);
			j++;
		}
		_putchar('\n');
		j++;
	}
}
