#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit[4];

	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		putchar(i + '0');

		for (j = 0; j < 9; j++)
		{
			putchar(j + '0');

			for (k = 0; k < 10; k++)
			{
				putchar(k + '0');
			}
		}
	}

	putchar('\n');
	return (0);
}
