#include "lists.h"
/**
 * *add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: pointer to head pointer to first node of list
 * @n: data member of node
 *
 * Return: address of new node or NULL upon failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;

	while (new_node != NULL)
	{
		return (new_node);
	}

	return (NULL);

}
