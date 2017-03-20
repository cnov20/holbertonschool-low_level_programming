#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at given position of list
 * @h: pointer to pointer to first node of list
 * @idx: index of node - location within list
 * @n: data contained within node
 *
 * Return: address of new node - SUCCESS or NULL - if FAILURE
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *temp;
	dlistint_t *new_node;
	unsigned int node_number;

	if (h == NULL)
		return (NULL);

       	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (*h);
	}

	temp = *h;
	node_number = 0;
	while (temp != NULL)
	{
		if (idx == node_number - 1)
		{
			return (new_node);
		}

		temp = temp->next;
		node_number++;
	}

	return (NULL);
}
