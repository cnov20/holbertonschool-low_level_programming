#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 * Return: Nothing, void
 */

void hash_table_delete(hash_table_t *ht)
{

	unsigned int index;
	hash_node_t *temp_ptr;

	index = 0;

	for (index = 0; index < ht->size; index++)
	{
		temp_ptr = ht->array[index];
		while (temp_ptr != NULL)
		{
			free(temp_ptr->key);
			free(temp_ptr->value);
			free(temp_ptr);
			temp_ptr = temp_ptr->next;
		}

	}

	free(ht);
	free(ht->array);
}
