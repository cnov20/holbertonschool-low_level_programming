#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to pointer to head of linked list
 *
 * Return: head node's data - (n)
 */
int pop_listint(listint_t **head)
{
	int ret_data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	while (head != NULL)
	{
		temp = *head;
		*head  = temp->next;
		ret_data = temp->n;
		return (ret_data);
	}

	return (-1);
}
