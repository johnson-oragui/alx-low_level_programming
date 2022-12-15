#include <stdio.h>

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

	for (i = 0; i < 90; i++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;

		printf("%lu, ", num3);
	}
	printf("19740274219868223167, 31940434634990099905, 51680708854858323072, 83621143489848422977, 135301852344706746049, 218922995834555169026");
	printf("\n");

	return (0);
}
