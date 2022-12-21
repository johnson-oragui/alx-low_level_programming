#include "main.h"
#include <stdlib.h>
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @c: string to change
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; i < (c[i] != '\0)'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] -= 32;
		}
	}
}
