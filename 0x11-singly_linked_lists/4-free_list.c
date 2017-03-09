#include "lists.h"
/**
 * free_list - frees memory previously dynamically allocated to linked list
 * @head: pointer to head of linked list
 *
 * Return: Nothing - void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}


}
