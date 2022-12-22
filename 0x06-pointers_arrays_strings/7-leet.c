#include "main.h"
#include <stdlib.h>
/**
 * *leet - encodes string to number
 * @s: string to encode
 * Return: value of s
 */

char *leet(char *s)
{
	int i;
	int j;

	char str[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	i = 0;
	while (str[i] != 0)
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (s[i] == str[j])
				s[i] = num[j];
			j++;
		}
		i++;
	}

	return (s);
}
