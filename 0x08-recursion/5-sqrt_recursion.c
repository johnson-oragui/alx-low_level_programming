#include "main.h"
#include <stdio.h>
/**
 * back_up_sqrt - support function for recursion
 * @n: number to find the sqrt
 * @vsqrt: natural sqrt
 * Return: value of sqrt
 */
int back_up_sqrt(int n, int vsqrt)
{
	if (vsqrt * vsqrt == n)
	{
		return (vsqrt);
	}
	else
	{
		if (vsqrt * vsqrt > n)
		{
			return (-1);
		}
		else
		{
			return (back_up_sqrt(n, vsqrt + 1));
		}
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to check for square root
 * Return: value of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (1);
	}
	else
	{
		return (back_up_sqrt(n, 0));
	}
}
