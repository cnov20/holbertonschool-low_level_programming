#include "lists.h"
/**
 * *reverse_listint - reverses a linked list
 * @head: pointer to pointer to head of linked list
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *deleted_node;
	listint_t *current_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);

	deleted_node = *head;

		*head = deleted_node->next;
		free(deleted_node);

	i = 1;
	while (i)
	{
		deleted_node = deleted_node->next;
		i++;
	}

	current_node = deleted_node->next;
	deleted_node->next = current_node->next;
	free(current_node);
	return (*head);
}
