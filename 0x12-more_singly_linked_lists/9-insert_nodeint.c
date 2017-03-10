#include "lists.h"
/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to head of linked list
 * @idx: index of the list where the new node should be added
 * @n:
 *
 * Return: address of new node added on SUCCESS - NULL on FAILURE
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new_node;
	listint_t *current_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;

	if (head == NULL)
	{
		*head = new_node;
		return (NULL);
	}
	else if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	else
	{
		current_node = *head;

		i = 1;
		while (current_node != NULL)
		{
			if (i == idx)
			{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (*head);
			}

			current_node = current_node->next;
			i++;
		}

	}

	return (new_node);
}
