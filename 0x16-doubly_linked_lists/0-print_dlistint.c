#include "lists.h"
/**
 * print_dlistint - prints all elemenents of a doubly linked list
 * @h: pointer to head node of list
 *
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	unsigned int num_nodes = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		num_nodes++;
	}

	return (num_nodes);
}
