#include "lists.h"
/**
 * get_dnodeint_at_index - function returns the nth node of doubly linked list
 * @head: pointer to first node of list
 * @index: index of node - location within list
 *
 * Return: given index of node or NULL - if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int node_number = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (temp != NULL)
	{
		if (index == node_number)
		{
			return (temp);
		}
		node_number++;
		temp = temp->next;
	}

	return (NULL);
}
