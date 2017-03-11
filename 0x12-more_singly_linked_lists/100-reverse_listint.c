#include "lists.h"
/**
 * *reverse_listint - reverses a linked list
 * @head: pointer to pointer to head of linked list
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *current_node;
	listint_t *next_node;

	current_node = *head;
	if (head == NULL || *head == NULL)
		return (NULL);
	if (current_node == NULL)
		return (NULL);
	if (current_node->next == NULL)
		return (*head);

	while (current_node != NULL)
	{
		next_node = current_node->next;
		current_node = next_node;
	}
	*head = current_node;
	return (*head);
}
