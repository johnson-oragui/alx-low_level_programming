#include "main.h"
#include <unistd.h>

/**
 * putchar - writes character c to stdout
 *
 * Return: 1 (success
 */

int _putchar(char c)
{
	return (write(1, &c , 1));
}
