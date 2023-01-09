#include "main.h"
#include <unistd.h>
/**
 * _Putchar - writes a character to the output
 * @c: character to write
 * Return: character to the output
 * 
 */
 int _putchar(char c)
 {
	 return (write(1, &c, 1));
 }
