#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: String to duplicate
 *
 * Return: Pointer to new string, NULL if failed to make memory
 */
char *_strdup(char *str)
{
	char *nstr
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	i = len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	nstr = malloc(len * sizeof(*str));

	if (nstr == NULL)
		return (NULL);

	while (i <= len)
	{
		nstr[i] = str[i];
		i++;
	}
	return (nstr);
}
