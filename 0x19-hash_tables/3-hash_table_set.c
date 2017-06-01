#include "hash_tables.h"

/**
 * hash_table_set - adds an element to previously created hash table
 * @ht: hash table to add key/value pair to
 * @key: data to be indexed - cannot be empty string
 * @value: value associated with aforementioned key - can be empty string
 *
 * Return: 1 if successful - 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
/*	char *key_copy;
	char *value_copy;
*/	hash_node_t *new_node;

	if (!ht || !key || !value)
	{
		return (0);
	}

	if (new_node == NULL)
		return (0);

/*	new_node = malloc(sizeof(hash_node_t)); */

	index = key_index((const unsigned char *)key, ht->size);


	return (1);

}
