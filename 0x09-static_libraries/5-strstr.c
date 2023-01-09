#include "main.h"
#include <string.h>
/**
 * *_strstr - finds the first occurrence of the substring
 * @haystack: string to be scanned
 * @needle: character to be matched
 * Return: occurence to the character matched
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
