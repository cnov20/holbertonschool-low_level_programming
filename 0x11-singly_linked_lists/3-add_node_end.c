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

	new_end->str = strdup(str);
	new_end->len = _strlen(str);
	new_end->next = *head;
	*head = new_end;

	while (new_end != NULL)
	{
		return(new_end->next);
	}

	return (NULL);
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
