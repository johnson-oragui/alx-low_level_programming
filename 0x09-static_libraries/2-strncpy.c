#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * *_strncpy - copies string to another
 * @dest: string point to
 * @src: string to be copied
 * @n: number of strings to be copied
 * Return: value of strncpy
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
