#include "lists.h"
/**
 * sum_listint_t - returns sum of all the data (n) of a listint_t linked list
 * @head: pointer to pointer to head of linked list
 *
 * Return: nth node of linked list or NULL if does not exist
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;;
		temp = temp->next;
	}

	return (sum);
}
