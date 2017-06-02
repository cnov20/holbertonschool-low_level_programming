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
	unsigned int index, count, elements;

	if (!ht || !ht->array)
		return;

	printf("{");
	count = 0;
	elements = 0;
	for (index = 0; index < ht->size; index++)
	{
		temp_ptr = ht->array[index];

		if (temp_ptr != NULL)
			elements++;

		while (temp_ptr != NULL)
		{
			printf("'%s': ", temp_ptr->key);
			printf("'%s'", temp_ptr->value);
			printf(", ");

			if (elements == count)
				printf("xxx");

			temp_ptr = temp_ptr->next;
			count++;
		}

	}
	printf("Count: %d - elements: %d", count, elements);
	printf("}");
	printf("\n");
}
