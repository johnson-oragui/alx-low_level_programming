#include "main.h"
#include <stdio.h>
/**
 * factorial - prints factorial of a given number
 * @n: number to find factoria
 * Return: value of factoria
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
