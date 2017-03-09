#include "lists.h"
/**
 * list_len - returns number of elemnents in a linked list
 * @h: pointer to head of linked list
 *
 * Return: number of nodes in linked list
 */

size_t list_len(const list_t *h)
{

	unsigned int num_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elements++;
	}

	return (num_elements);

}
