#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int num1 = 1, num2 = 2, num3, i;

	printf("%d, %d, ", num1, num2);

	for (i = 0; i <= 48; i++)
	{
		num3 = num1 + num2;
		printf("%d, ", num3);
		num1 = num2;
		num2 = num3;
	}

	return (0);
}
