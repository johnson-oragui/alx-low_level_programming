#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of the triangle
 * Description: only use _putchar
 * if size is 0 or less, print new line
 * use # to print triangle
 */
void print_triangle(int size)
{
	int c, i, j;

	c = 0;
	i = size - 1;

	while (c < size)
	{
		i = size - i - c;
		j = c + 1;

		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		c++;
	}
	if (size <= 0)
		_putchar('\n');
}
