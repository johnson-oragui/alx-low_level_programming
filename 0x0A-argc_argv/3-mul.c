#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments recieved
 *
 * Return: 0 on success, 1 if arguments is less than two
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
