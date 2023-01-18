#include "FUNCTION_POINTERS_H"
#include <stdlib.h>
/**
 * _putchar - prints a character
 * @c: character to print
 * Return: 0 on success, 1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
