#include "main.h"
#include <ctypr.h>
#include <string.h>
#include <stdlib.h>
/**
 * check_for_int - checks the string for an integer
 * @str: string to check
 * Return: 0 on succes
 */
int check_for_int(char *str)
{
	int i;

	i = 0;
	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
