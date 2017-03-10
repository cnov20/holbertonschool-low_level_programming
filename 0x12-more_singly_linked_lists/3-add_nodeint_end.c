#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to pointer to head of linked list
 * @n: integer stored in node
 *
 * Return: number of nodes in linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end;
	listint_t *temp;

	new_end = malloc(sizeof(listint_t));

	if (new_end == NULL)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;
	temp = *head;

	while (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_end;

	return (new_end);
}
