#include "lists.h"
/**
 * *add_nodeint - adds a new node at the start of a linked list
 * @head: pointer to pointer to head of linked list
 * @n: integer stored in node
 *
 * Return: number of nodes in linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));

	new_head->n = n;
	while (new_head != NULL)
	{
		new_head->next = *head;
		*head = new_head;
		return (new_head);
	}

	return (NULL);
}
