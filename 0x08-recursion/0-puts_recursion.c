#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	if (*s != '\0')
	{
		printf("%s"), s;
		_puts_recursion(s - 1);
	}
}
