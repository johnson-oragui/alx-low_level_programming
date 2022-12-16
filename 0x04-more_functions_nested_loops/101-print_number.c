#include "main.h"

/**
 * print_number - prints an int
 *
 * @n: number to print
 * Description: only use _putchar, can not use long.
 * can not use pointers, can not hard code
 * can not use arrays
 */
void print_number(int n)
{
	long p;
	int i;
	long num;

	num = n;

	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	p = 1;
	i = 1;
	while (i)
	{
		if (num / (p * 10) > 0)
			p *= 10;
		else
			i = 0;
	}

	while (num >= 0)
	{
		if (p == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / p % 10) + '0');
			p /= 10;
		}
	}
}
