#include "main.h"

/**
 * print_times_table - print_times_table
 *
 * @n: the number times table
 */
void print_times_table(int n)
{
	int num, multi, product;

	for (num = 0; num <= n; num++)
	{
		if (n > 15)
		{
			break;
		}
		_putchar('0');

		for (multi = 0; multi <= n; multi++)
		{
			if (multi == 0)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');

			product = num * multi;

			if (product <= n)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}