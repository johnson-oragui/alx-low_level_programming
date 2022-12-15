#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - entry point
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	unsigned long int ab1 = 0;
	unsigned long int ab2 = 0;
	unsigned long int xy1 = 1;
	unsigned long int xy2 = 2;
	int i;

	printf("%lu, %lu, "), xy1, xy2;
	for (i = 2; i < 98; i++)
	{
		if (xy1 + xy2 > LARGEST || ab2 > 0 || ab1 > 0)
		{
			num1 = (xy1 + xy2) / LARGEST;
			num2 = (xy1 + xy2) % LARGEST;
			num3 = ab1 + ab2 + num1;
			ab1 = ab2;
			ab2 = num3;
			xy1 = xy2;
			xy2 = num2;
			printf("%lu%010lu", ab2, xy2);
		}
		else
		{
			num2 = xy1 + xy2;
			xy1 = xy2;
			xy2 = num2;
			printf("%lu", xy2);
		}
		if (i != 97)
			printf(", ");
	}
	print("\n");
	return (0);
}
