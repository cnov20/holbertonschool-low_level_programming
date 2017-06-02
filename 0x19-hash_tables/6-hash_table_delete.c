#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 * Return: Nothing, void
 */

void hash_table_delete(hash_table_t *ht)
{

	unsigned int i;

	for (i = 0; i < ht->size; i++)
	{
		free(ht);
		free(ht->array);

	}



}
