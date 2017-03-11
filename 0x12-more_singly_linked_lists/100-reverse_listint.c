#include "lists.h"
/**
 * *reverse_listint - reverses a linked list
 * @head: pointer to pointer to head of linked list
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *prev_node;
	listint_t *current_node;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (current_node != NULL)
	{
		next_node = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next_node;
	}
	*head = prev_node;
	return (*head);
}
