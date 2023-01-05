#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - raises the power of x to y
 * @x: power to be raised
 * @y: power raised
 * Return: value of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	if (y == 1)
	{
		return (x);
	}
	else
	{
		return (_pow_recursion(x, y - 1) * x);
	}
}
