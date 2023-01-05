#include "main.h"
#include <stdio.h>
/**
 * back_up_prime - returns prime number
 * @n: integer prime
 * @div: integer
 * Return: prime value
 */
int back_up_prime(int n, int div)
{
	if (div < n)
	{
		if (n % div == 0)
		{
			return (0);
		}
		else
		{
			return (back_up_prime(n, div + 2));
		}
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - prints prime number
 * @n: number to print
 * Return: value of n
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (back_up_prime(n, 2));
	}
}
