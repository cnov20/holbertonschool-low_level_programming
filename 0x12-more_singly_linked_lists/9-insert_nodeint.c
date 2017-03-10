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

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;

	if (head == NULL && *head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	if (idx == 0)
	{
		new_node->next = *head;
		return (new_node);
	}

	current_node = *head;

	while (idx - 1 > 0)
	{
		current_node = current_node->next;
		idx--;
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (*head);
}
