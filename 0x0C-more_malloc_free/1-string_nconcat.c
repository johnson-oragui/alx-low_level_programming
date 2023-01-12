#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates two strings usin n amount os s2
 * @s1: string to conatenate
 * @s2: string to concatenate
 * @n: probable size of s2 to add to s1
 * Return: newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *catedstr;
	char *none;
	int i;
	int len;
	int j;
	int size;

	len = 0;
	none = "";
	if (s1 == NULL)
	{
		s1 = none;
	}
	if (s2 == NULL)
	{
		s2 = none;
	}
	while (s1[len] != '\0')
	{
		len++;
	}
	size = (len + n) * sizeof(*catedstr);
	catedstr = malloc(size + 1);
	if (catedstr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size && s1[i] != '\0')
	{
		catedstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size && s2[j] != '\0')
	{
		catedstr[i] = s2[j];
		i++;
		j++;
	}
	catedstr[i] = '\0';
	return (catedstr);
}
