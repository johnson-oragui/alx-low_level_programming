#include "main.h"
#include <string.h>
/**
 * *_memset - fills the bytes of a memory
 * @s: pointer to the block
 * @b: value to be set
 * @n: number of bytes to be set
 * Return: value of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
