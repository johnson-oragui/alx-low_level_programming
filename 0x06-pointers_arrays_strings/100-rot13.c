#include "main.h"
/**
 * *rot13 - switches characters 13 places in the alphabet
 * @s: characters
 * Return: value of s
 */
char *rot13(char *s)
{
	int i;
	char upper[] = "NOPQRSTUVWXYZ";
	char lower[] = "nopqrstuvwxyz";

	for (i = 0; s[i] != '\0'; i++)
	{
		while ((s[i] > 65 && s[i] < 9) || (s[i] > 96 && s[i] < 123))
		{
			if (s[i] - 65 > 25)
				s[i] = upper[s[i] - 97];
			else
				s[i] = lower[s[i] - 65];
			i++;
		}
	}
	return (s);
}
