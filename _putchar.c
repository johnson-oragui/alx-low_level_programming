#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints a character to stdout
 * @c: character to print
 * Return: 0 on success, 1 on error
 * error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
