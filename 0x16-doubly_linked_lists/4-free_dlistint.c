#include "lists.h"
/**
 * free_dlisting - function that frees doubly linked list
 * @head: pointer to first node of list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
