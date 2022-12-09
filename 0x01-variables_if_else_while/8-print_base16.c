#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	char j = 'a';

	while (i < 10)
	{
		putchar(i);
		i++;
	}

	while (j < 'g')
	{
		putchar(j);
		j++;
	}
		putchar('\n');
	return (0);
}
