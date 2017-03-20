#include "lists.h"
/**
 * sum_dlistint - adds and then returns sum of all data of doubly linked list
 * @head: pointer to first node of list
 *
 * Return: sum of list data or 0 - if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
