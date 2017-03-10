#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: pointer to head of linked list
 *
 * Return: number of nodes in linked list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int length = 0;
	const listint_t *temp = h;


	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		length++;
	}

	return (length);
}
