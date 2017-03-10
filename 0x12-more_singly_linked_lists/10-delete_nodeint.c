#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: pointer to pointer to head of linked list
 * @index: index of the list where the new node should be deleted
 *
 * Return: (1) on SUCCESS - (-1) on FAILURE
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *deleted_node;
	listint_t *current_node;
	unsigned int i;

	deleted_node = *head;

	if (index == 0)
	{
		*head = deleted_node->next;
		free(deleted_node);
		return (1);
	}

	i = 1;
	while (i < index - 1)
	{

		deleted_node = deleted_node->next;
		return (-1);
		i++;
	}

	current_node = deleted_node->next;
	deleted_node->next = current_node->next;
	free(current_node);
	return (1);
}
