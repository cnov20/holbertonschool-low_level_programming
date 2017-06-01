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
	hash_node_t *temp_ptr;

	if (!ht || !ht->array || !key)
		return (NULL);

	value = key_index((const unsigned char *)key, ht->size);

	temp_ptr = ht->array[value];

	if (temp_ptr == NULL)
		return (NULL);

	while (temp_ptr != NULL)
	{
		if (strcmp(key, temp_ptr->key) == 0)
			return (temp_ptr->value);

		temp_ptr = temp_ptr->next;
	}

	return (NULL);
}
