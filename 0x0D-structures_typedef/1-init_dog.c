#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - structure that declares variable with info about a dog
 * @d: pointer variable initalzed as type 'struct dog'
 * @name: name of dog
 * @owner: name of dog's owner
 * @age: age of dog
 *
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
