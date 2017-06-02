#include "hash_tables.h"

/**
 * hash_table_print - prints key/value pairs within a hash table
 * @ht: hash table to print values of
 *
 * Return: Nothing, void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp_ptr, *array_ptr;
	unsigned int index, elements;

	if (!ht || !ht->array)
		return;

	index = 0;
	while (index < ht->size)
	{
		temp_ptr = ht->array[index];
		while (temp_ptr != NULL)
		{
			elements = index;
			temp_ptr = temp_ptr->next;

		}
		index++;
	}

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		array_ptr = ht->array[index];

		while (array_ptr != NULL)
		{
			printf("'%s': ", array_ptr->key);
			printf("'%s'", array_ptr->value);

			if (index != elements)
				printf(", ");

			array_ptr = array_ptr->next;
		}

	}
	printf("}");
	printf("\n");
}
