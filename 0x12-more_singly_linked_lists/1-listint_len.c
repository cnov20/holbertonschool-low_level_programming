#include "lists.h"
/**
 * listint_len - returns the number of elements of a linked list
 * @h: pointer to head of linked list
 *
 * Return: number of nodes in linked list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int length = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		length++;
	}

	return (length);
}
