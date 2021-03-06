#include "lists.h"
/**
 * *get_nodeint_at_index- returns the nth node of a listint_t linked list
 * @head: pointer to pointer to head of linked list
 * @index: index of the current node, as you iterate through linked list
 *
 * Return: nth node of linked list or NULL if does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
			count++;
			temp = temp->next;
	}

	return (NULL);
}
