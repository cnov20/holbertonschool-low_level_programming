#include "lists.h"
/**
 * *reverse_listint - reverses a linked list
 * @head: pointer to pointer to head of linked list
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *new_head;
	listint_t *next_node;

	new_head = NULL;
	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = new_head;
		new_head = *head;
		*head = next_node;
	}

	*head = new_head;
	return (*head);
}
