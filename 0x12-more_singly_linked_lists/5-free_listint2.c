#include "lists.h"
/**
 * free_listint2 - free a listint_t list and set head to NULL
 * @head: pointer to pointer to head of linked list
 *
 * Return: Nothing - Void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}

	head = NULL;
}
