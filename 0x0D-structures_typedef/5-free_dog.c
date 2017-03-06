#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function to free structure dog and its elements
 * @d: structure passed to be free
 *
 * Return: none
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
