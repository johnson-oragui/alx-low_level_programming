#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 100 ; i++)
	{
	if (i < 10)
	{
		putchar(i + '0');
	}
	if (i < 89)
	{
		putchar(',');
		putchar(' ');
	}

	}

		putchar('\n');
	return (0);
}
