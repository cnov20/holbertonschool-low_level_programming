#include "lists.h"
/**
 * *add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: pointer to head pointer to first node of list
 * @n: data member of node
 *
 * Return: address of new node or NULL upon failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	temp = *head;

	if (temp == NULL)
	{	*head = new_node;
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	while (temp->next != NULL)
	{
		temp = temp->next;
		new_node->prev = temp;
	}

	temp->next = new_node;

	return (new_node);

}
