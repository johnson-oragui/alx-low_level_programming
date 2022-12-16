#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * Description: can only print with _putchar
 * @n: number of times to print _
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');

	}
		_putchar('\n');
}
