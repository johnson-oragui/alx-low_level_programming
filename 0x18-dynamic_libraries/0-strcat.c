#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strcat - appends a string
 *
 * @dest: string to be appended to
 * @src: string to be appended
 * Return: value of *_strcat
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
