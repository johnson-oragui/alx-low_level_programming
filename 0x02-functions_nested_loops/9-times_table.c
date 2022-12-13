#include "main.h"

/**
 * times_table - print the 9 times table
 */
void times_table(void)
{
	int num, mult, product;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar('_');
			_putchar(' ');

			product = num * num;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');
			_putchar((prroduct % 10) + '0');
		}
		_putchar('\n');
	}
}
