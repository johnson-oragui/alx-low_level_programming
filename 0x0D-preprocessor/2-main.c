#include <stdio.h>
/**
 * main - Print the name of the file the program was compiled from
 *
 * Return: 0 always (success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
