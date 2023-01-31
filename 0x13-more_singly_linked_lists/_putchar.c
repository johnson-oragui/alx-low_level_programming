#include <stdlib.h>
#include <stdio.h>

/**
 * _putchar - prints a single character to standard output
 * @c: character to print
 * Return: 0 on success, 1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
