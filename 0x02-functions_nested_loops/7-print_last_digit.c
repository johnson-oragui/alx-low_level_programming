#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints the last digit
 * @n: The number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int con;

	if (n < 0)
	{
		con = -1 * (n % 10);
		_putchar()con + '0';
		return (con);
	}
	else
	{
		con = n % 10;
		_putchar(con + '0');
		return (con);
	}

	return (0);
}
