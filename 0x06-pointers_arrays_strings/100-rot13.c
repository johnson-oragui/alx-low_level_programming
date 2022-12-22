#include "main.h"
/**
 * *rot13 - switches characters 13 places in the alphabet
 * @s: characters
 * Return: value of s
 */
char *rot13(char *s)
{
	int i;
	char alphau[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char alphal[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			s[i] = (s[i] - 65 > 25) ?
				alphal[s[i] - 97] : alphau[s[i] - 65];
		}
	}
	return (s);
}
