#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - prints a string length
 * @s: string to count
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
