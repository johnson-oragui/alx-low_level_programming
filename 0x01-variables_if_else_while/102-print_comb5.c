#include <stdio.h>
#include <stdlib.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (success)
 *
 */

int main(void)
{
	int i = 0;
	int j_d;
	int k_d;

	int i2;
	int j_d2;
	int k_d2;

	while (i <= 98)
	{
		j_d = (i / 10 + '0');
		k_d = (i % 10 + '0');
		i2 = 0;

		while (i2 <= 99)
		{
			j_d2 = (i2 / 10 + '0');
			k_d2 = (i % 10 + '0');

			if (i < i2)
			{
				putchar(j_d);
				putchar(k_d);
				putchar(' ');
				putchar(j_d2);
				putchar(k_d2);

				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			i2++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
