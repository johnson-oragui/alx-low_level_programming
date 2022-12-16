#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print fizz for multiple of 3, and buzz for 5
 * Multiple of both, print fizzbuzz
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d ", i);
		if(i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
