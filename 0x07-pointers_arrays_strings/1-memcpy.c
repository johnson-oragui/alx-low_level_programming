#include "main.h"
#include <string.h>

/**
 * *_memcpy - copies n characters from memory area src to memory area dest
 *
 * @dest:
 * @src:
 * @n:
 * Return: value of memcpy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
