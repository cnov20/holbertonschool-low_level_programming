#include "lists.h"
/**
 * print_listint_safe - prints all the elements of a list
 * @head: pointer to head of linked list
 *
 * Return: number of nodes in linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int length = 0;
	unsigned int j;
	const listint_t *temp = head;
	const listint_t *temp2;



	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		temp2 = head;
		length++;
		for (j = 0; j < length; j++)
		{
			if (temp == temp2)
			{
				printf("-> [%p] %d\n", (void *)temp, temp2->n);
				return (length);
			}

			temp2 = temp2->next;
		}
	}

	return (length);
}
