#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes a character c to stdout
 *
 * @c: character to write
 *
 * Return: 1 on error, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
