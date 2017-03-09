#include "lists.h"
/**
 * add_node_end - adds a new node to end of linked list
 * @head: pointer to head of linked list
 * @str: string to be duplicated and added to new node
 *
 * Return: number of nodes in linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end = malloc(sizeof(struct list_s));
	list_t *previous_end = *head;

	if (new_end == NULL)
		return (NULL);

	new_end->str = strdup(str);
	new_end->len = _strlen(str);

	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
		return (NULL);
	}
	while (previous_end->next != NULL)
	{
		previous_end = previous_end->next;
	}

	previous_end->next = new_end;

	return (new_end);
}

/**
 * _strlen - prints length string in integer
 * @s: string passed to function
 * Return: a
 */
int _strlen(const char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;

	return (a);
}
