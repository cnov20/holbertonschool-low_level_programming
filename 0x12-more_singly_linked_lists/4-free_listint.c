#include "lists.h"
/**
 * free_listint - free a listint_t list
 * @head: pointer to pointer to head of linked list
 *
 * Return: Nothing - Void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

}
