#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - structure that declares variable with info about a dog
 * @name: name of dog
 * @owner: name of dog's owner
 * @age: age of dog
 *
 * Return: none
 */

struct dog
{

	char *name;
	char *owner;
	float age;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H*/
