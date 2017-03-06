#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - structure that declares variable with info about a dog
 * @d: pointer variable initalzed as type 'struct dog'
 *
 * Return: none
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}

	printf("Age: %f\n", d->age);

	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
