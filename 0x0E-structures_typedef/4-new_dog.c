#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Function that creates a new dog
 * @name: The dog name
 * @age: The dog age
 * @owner: The dog owner
 * Return: pointer to buffer of datatype dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, x;
	dog_t *new_dog;

	nlen = olen = 0;
	while (name[nlen++])
		;
	while (owner[olen++])
		;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(nlen * sizeof(new_dog->name));
	if (new_dog == NULL)
		return (NULL);
	for (x = 0; x < nlen; x++)
		new_dog->name[x] = name[x];

	new_dog->age = age;

	new_dog->owner = malloc(olen * sizeof(new_dog->owner));
	if (new_dog == NULL)
		return (NULL);
	for (x = 0; x < olen; x++)
		new_dog->owner[x] = owner[x];
	return (new_dog);
}
