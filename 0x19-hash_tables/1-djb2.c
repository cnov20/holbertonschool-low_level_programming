#include "hash_tables.h"

/**
 * hash_djb2 - implements dbj2 hash table alogrithm
 * @str: pointer to character array in array element linked list
 *
 * Return: unsigned long int hash value
 */


unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return hash;
}
