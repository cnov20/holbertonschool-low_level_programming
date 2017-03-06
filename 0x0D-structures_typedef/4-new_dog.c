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

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	new->name = malloc(sizeof(name));

	_strcpy(new->name, name);

	new->owner = malloc(sizeof(owner));

	_strcpy(new->owner, owner);

	new->age = age;

	return (new);
}

/**
 * _strcpy - copies a string
 *@dest: points to buffer
 *@src: points to string
 *
 * Return: the pointer to dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
