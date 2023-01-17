#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print out all of the struct dog info
 * @d: Pointer to struct
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
