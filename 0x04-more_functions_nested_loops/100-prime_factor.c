#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints largest prime factors of 612852475143
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	long num = 612852475143;

	for (i = (int) sqrt(num); i > 2; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}
