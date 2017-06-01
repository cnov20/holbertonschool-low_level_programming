#include "hash_tables.h"

/**
 * hash_table_print - prints key/value pairs within a hash table
 * @ht: hash table to print values of
 *
 * Return: Nothing, void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp_ptr;
	unsigned long int index;

	if (ht || ht->array)
		return;

	index = 0;
	temp_ptr = ht->array[index];
	while (temp_ptr != NULL)
	{
		printf("%s : %s", temp_ptr->key, temp_ptr->value);
	}
}
