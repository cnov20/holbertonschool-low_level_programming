#include "lists.h"
/**
 * delete_dnodeint_at_index - deltes node at given position of list
 * @head: pointer to pointer to first node of list
 * @idx: index of node - location within list
 *
 * Return: 1 - SUCCESS or -1 - FAILURE
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *temp;
	d_listint_t *node_to_delete;
	unsigned int node_number;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}

	temp = *head;
	node_number = 0;

	while (temp != NULL)
	{
		if (index == node_number + 1)
		{
			*head = temp->next;
			temp->next = *head;
			temp->prev = temp;
			return (1);
		}

		temp = temp->next;
		node_number++;
	}

	return (-1);
}
