#include <unistd.h>
#include "lists.h"
/**
 * _putchar - prints a character to standard output
 * @c: character to print
 * Return: 0 on success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
