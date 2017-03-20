#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: pointer to head node of list
 *
 * Return: number of elements in a doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	unsigned int num_nodes = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		num_nodes++;
	}

	return (num_nodes);
}
