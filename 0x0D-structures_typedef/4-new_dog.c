#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new struct dog
 * @name: pointer variable for name of dog
 * @age: variable for age of dog
 * @owner: pointer variable for name of owner
 *
 * Return: none
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	struct dog *new;

	new = malloc(sizeof(struct dog));

	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return new;

}
