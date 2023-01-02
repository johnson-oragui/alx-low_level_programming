#include "main.h"
#include <string.h>

/**
 * _strspn - calculates the length of initial segment of s
 * @s: string to be scanned
 * @accept: string to containing char to match
 * Return: length of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
