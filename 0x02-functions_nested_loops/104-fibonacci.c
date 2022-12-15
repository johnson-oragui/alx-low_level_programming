#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	unsigned long long num1 = 1;
	unsigned long long num2 = 2;
	unsigned long long num3;
	int i;

	printf("%llu, %llu, ", num1, num2);

	for (i = 0; i < 90; i++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;

		printf("%llu, ", num3);
	}
	printf("\n");

	return (0);
}
