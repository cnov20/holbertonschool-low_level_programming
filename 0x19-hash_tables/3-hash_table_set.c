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
	hash_node_t *new_node;

	if (!ht || !ht->array || !key || !value || strlen(key) == 0)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
		return (0);

	new_node->value = strdup(value);
	if (new_node->value == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
