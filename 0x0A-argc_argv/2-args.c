#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: counts arguments
 * @argv: arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
