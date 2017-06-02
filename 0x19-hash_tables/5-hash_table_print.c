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
	unsigned int index, count;

	if (!ht || !ht->array)
		return;

	printf("{");
	count = 0;
	for (index = 0; index < ht->size; index++)
	{
		temp_ptr = ht->array[index];
		while (temp_ptr != NULL)
		{
			printf("'%s':", temp_ptr->key);
			printf("'%s'", temp_ptr->value);

			if (count < 6)
				printf(", ");

			temp_ptr = temp_ptr->next;
			count++;
		}

	}
	printf("}");
	printf("\n");
}
