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
	int num3;
	int i;
	int j = 0;

	for (i = 0; i < 48; i++)
	{
		num3 = num1 + num2;

		num1 = num2;

		num2 = num3;

		if (num3 % 2 == 0)
		{
			j += sum3;
		}
		if (j >= 4000000)
		{
			break;
		}
		printf("%d, ", j);
	}

	return (0);
}
