#include "main.h"

/**
 * _isupper - upper case character
 * @c: the parameter to be checked
 * Return: 1 if upprcase, and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
