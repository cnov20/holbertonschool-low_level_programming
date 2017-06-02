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

	unsigned int index;
	hash_node_t *hash_node;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	hash_node = ht->array[index];

	if (!hash_node)
		return (NULL);

	while (index < ht->size)
	{

		while (hash_node != NULL)
		{
			if (strcmp(hash_node->key, key) == 0)
				return (hash_node->value);

			hash_node = hash_node->next;
		}
		index++;
	}
	return (NULL);
}
