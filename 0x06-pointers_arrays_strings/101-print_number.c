#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to print
 *
 */
void print_number(int n)
{
	int fort = 1;
	int num = 0;
	int hold = n;

	if (n < 0)
	{
		_putchar('-');
		num = 1;
	}

	while (hold > 9 || hold < -9)
	{
		fort *= 10;
		hold /= 10;
	}

	while (fort > 0)
	{
		if (fort > 9)
		{
			if (!num)
				_putchar((n / fort % 10) + '0');
			else
				_putchar((n / fort % 10) * -1 + '0');

			fort /= 10;
		}

		if (fort == 1)
		{
			if (num)
				_putchar((n % 10) * -1 + '0');
			else
				_putchar(n % 10 + '0');
			fort = 0;
		}
	}
}
