#include "lists.h"
/**
 * add_node - adds a new node to beginning of linked list
 * @head: pointer to head of linked list
 * @str: string to be duplicated and added to new node
 *
 * Return: number of nodes in linked list
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_head = malloc(sizeof(struct list_s));

	new_head->str = strdup(str);
	new_head->len = _strlen(str);
	new_head->next = *head;
	*head = new_head;

	while (new_head != NULL)
	{
		return (&*new_head);
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
