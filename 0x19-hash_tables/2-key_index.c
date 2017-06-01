#include "hash_tables.h"

/**
 * key_index - gets the index of a given key
 * @key: data to be indexed into array
 * @size: array of the hash table
 *
 * Return: index of key/value pair (hash value)
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);

}
