#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * main - prints the multiplication of two int
 * @argc: arguments count
 * @argv: arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc == 1)
	{
		a = (atoi(argv[1]));
		b = (atoi(argv[2]));
		printf("%d\n", a * b);
		return (0);
	}

	printf("Error\n");
	return (1);
}
