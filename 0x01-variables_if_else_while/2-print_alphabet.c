#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	for (x = 'A' ; x <= 'Z' ; x++)
	{
		int lower_x = tolower(x);

		putchar(lower_x);
	}


	return (0);
}
