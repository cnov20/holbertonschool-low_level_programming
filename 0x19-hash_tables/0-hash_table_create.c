#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of hash table array
 *
 * Return - pointer to newly created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *hash_table;
/*	unsigned int i; */

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return NULL;

	hash_table->array = malloc(sizeof(hash_table_t) * size);

	if(hash_table->array == NULL)
		return NULL;
	for(i = 0; i < size; i++)
	{
		hash_table->array = NULL;
	}


	return (hash_table);
}
