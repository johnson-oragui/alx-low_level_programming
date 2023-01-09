#include "main.h"

#include <string.h>

/**

 * *_strchr - searches for the first occurence of a char in a string

 * @s: string to be scanned

 * @c: char to be scanned for in s

 * Return: a pointer to the first occurence of c

 */

char *_strchr(char *s, char c)

{

	return (strchr(s, c));

}