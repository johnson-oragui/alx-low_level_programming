#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int num3;
	int i;

	printf("%lu, %lu, ", num1, num2);

	for (i = 0; i < 96; i++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;

		printf("%lu, ", num3);
	}
	printf("\n");

	return (0);
}
