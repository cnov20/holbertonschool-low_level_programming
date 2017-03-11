#include "lists.h"
/**
 * print_listint_safe - prints all the elements of a list
 * @h: pointer to head of linked list
 *
 * Return: number of nodes in linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int length = 0;
	const listint_t *temp = head;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)temp->next, temp->n);
		temp = temp->next;
		length++;
	}

	return (length);
}
