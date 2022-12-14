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
	int num1 = 1;
	int num2 = 2;
	long long int num3;
	int i;

	printf("%d, %d, ", num1, num2);

	for (i = 0; i <= 48; i++)
	{
		num3 = num1 + num2;
		printf("%lld, ", num3);
		num1 = num2;
		num2 = num3;
	}

	return (0);
}
