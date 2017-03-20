#include "lists.h"
/**
 * delete_dnodeint_at_index - deltes node at given position of list
 * @head: pointer to pointer to first node of list
 * @index: index of node - location within list
 *
 * Return: 1 - SUCCESS or -1 - FAILURE
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *temp;
	unsigned int node_number;

	if (*head == NULL || head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	node_number = 0;

	while (node_number < index - 1)
	{
		if (temp->next == NULL)
		{
			return (-1);
		}

		temp = temp->next;
		node_number++;
	}

	temp->next->prev = temp->prev;
	temp->prev->next = temp->next;

	return (1);
}
