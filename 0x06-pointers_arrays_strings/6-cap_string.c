#include "main.h"
#include <stdlib.h>
/**
 * *cap_string - capitalze string
 * @str: string
 * Return: value of str
 */

char *cap_string(char *str)
{
	int i;
	int j;
	int catalyst;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (i = 0; catalyst = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
		{
			catalyst = 1;
		}
		for (j = 0; nots[j] != '\0'; j++)
		{
			if (nots[j] == str[i])
				catalyst = 1;
		}

		if (catalyst)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				catalyst = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				catalyst = 0;
			else if (str[i] > 47 && str[i] < 58)
				catalyst = 0;
		}
	}
	return (str);
}
