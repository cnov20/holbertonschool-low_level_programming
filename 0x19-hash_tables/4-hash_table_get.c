#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a given key
 * @ht: previously created hash table to find key/value pairs within
 * @key: given value to search array for
 *
 * Return: value associated with array element's key or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int value;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	value = key_index((const unsigned char *)key, ht->size);

	node = ht->array[value];
	return (node->value);

}
