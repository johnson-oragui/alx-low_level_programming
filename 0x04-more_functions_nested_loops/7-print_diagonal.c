#include "main.h"

/**
 * print_diagonal - draws diagonal line at terminal
 * @n: number of times the character \ to be printed
 * Description: can only print with _putchar
 */
void print_diagonal(int n)
{
	int c, i;

	c = 0;

	while (n > 0)
	{
		i = c;

		while (i > 0)
		{
			_putchar(' ');
			i--;
		}

		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}
