#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
 * main - adds positive numbers
 * @argc: counts arguments
 * @argv: arguments
 * Return: 0 if no number, 1 if number is symbol
 */
int main(int argc, char *argv[])
{
	int i;
	int to_int;
	int sum = 0;

	i = 0;
	while (i < argc)
	{
		if (check_for_int(argv[i]))
		{
			to_int = atoi(argv[i]);
			sum += to_int;
		}
		else
		{
			printf("Error\n");
			return (0);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
