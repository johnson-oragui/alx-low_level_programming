#include "main.h"
#include <string.h>
/**
 * *_strpbrk - finds a first char in a string that matches another
 * @s: string to be scanned
 * @accept: string containing characters to match
 * Return: a pointer to the character in a string
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
