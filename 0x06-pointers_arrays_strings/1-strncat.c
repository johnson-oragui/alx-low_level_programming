#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strncat - appends a string to another
 * @dest: string to be appended to
 * @src: string to be appended
 * @n: lenght of string to be appended
 * Return: value of strncat
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
