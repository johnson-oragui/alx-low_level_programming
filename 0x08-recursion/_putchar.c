#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * @c: the character to print
 * Return: always 0 (success)
 * On error, -1 is returned and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
