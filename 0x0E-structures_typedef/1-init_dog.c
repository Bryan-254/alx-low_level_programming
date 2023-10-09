#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Function that initialize a variable
 * @d: pointer to structure dog
 * @name: The dog name
 * @age: The dog age
 * @owner: The dog owner
 * Return: void
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
