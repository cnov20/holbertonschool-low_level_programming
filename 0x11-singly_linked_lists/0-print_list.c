#include "lists.h"
/**
 * print_list - prints all lements of a list_t structured list
 * @h: pointer to head of linked list
 *
 * Return: number of nodes in linked list
 */

size_t print_list(const list_t *h)
{
	unsigned int length;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		length++;
	}

	return (length);
}
