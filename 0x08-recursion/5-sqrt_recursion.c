#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to check for square root
 * Return: value of n
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == -1)
	{
		return (-1);
	}

	if (_sqrt_recursion(n) % _sqrt_recursion(n - 1) == _sqrt_recursion(n - 1))
	{
		return _sqrt_recursion(n - 1);
	}
}
