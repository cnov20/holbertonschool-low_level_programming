#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure that declares variable with info about a dog
 * @name: name of dog
 * @owner: name of dog's owner
 * @age: age of dog
 *
 * Return: none
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /*DOG_H*/
