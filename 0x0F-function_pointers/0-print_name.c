#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - prints a name using a given function
 * @name: name of the person
 * @f: pointer to a function that prints the name in a specific way
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}
