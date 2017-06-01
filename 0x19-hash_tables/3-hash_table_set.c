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
	char *key_copy;
	char *value_copy;
	hash_node_t *new_node;

	if (!ht || !ht->array || !key || !value || strlen(key) == 0)
	{
		return (0);
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	key_copy = strdup(key);
	value_copy = strdup(value);

	if (key_copy == NULL || value_copy == NULL)
		return (0);


	ht->array[index] = new_node;
	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;

	return (1);
}