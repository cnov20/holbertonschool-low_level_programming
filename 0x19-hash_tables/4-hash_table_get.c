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
	hash_node_t *hash_node;

	if (!ht || !ht->array || !key || strlen(key) == 0)
		return (NULL);

	value = key_index((const unsigned char *)key, ht->size);

	hash_node = ht->array[value];

	if (!hash_node)
		return (NULL);

	while (hash_node)
	{
		if (strcmp(hash_node->key, key) == 0)
			return (hash_node->value);

		hash_node = hash_node->next;
	}

	return (NULL);
}
