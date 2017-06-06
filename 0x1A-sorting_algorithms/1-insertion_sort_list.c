#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list in ascending order
 * @list: doubly linked list of integers to be sorted
 *
 * Return - nothing, void
 */

void insertion_sort_list(listint_t **list)
{

	listint_t *current;
	listint_t *temp;
	listint_t *swap;

	if (!list || !*list)
		return;

	temp = *list;
	current = temp->next;

	while(temp != NULL)
	{

		printf("Current: %d\n", current->n);
		printf("This is temp: %d\n", temp->n);
		if (temp->n > current->n)
		{
			current = current->prev;
			temp = swap;
			swap = temp;
			temp = temp->next;
		}
/*		prev_node = sorted;
		sorted->prev->next = sorted;
*/
		else
		{
			current = current->next;
			swap = NULL;
		}
		print_list(*list);

	}


}
