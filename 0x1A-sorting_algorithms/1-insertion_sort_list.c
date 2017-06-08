#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list in ascending order
 * @list: doubly linked list of integers to be sorted
 *
 * Return - nothing, void
 */

void insertion_sort_list(listint_t **list)
{

	listint_t *current, *temp;

	if (!list || !*list)
		return;

	current = *list;
	while (current != NULL)
	{
		while (current->prev != NULL && current->prev->n > current->n)
		{
			temp = current;
			if (current->next != NULL)
				current->next->prev = temp->prev;
			current->prev->next = temp->next;

			current = current->prev;
			temp->prev = current->prev;
			temp->next = current;

			if (current->prev != NULL)
				current->prev->next = temp;
			current->prev = temp;

			current = current->prev;

			print_list(*list);

		}

		/*printf("hello current: %d\n", current->n);*/
		current = current->next;
	}

}
