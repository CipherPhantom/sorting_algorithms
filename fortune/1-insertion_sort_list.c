#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm.
 *
 * @list: A doubly linked list (pointer to the pointer of the head node)
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *prev, *curr;
	int swapped;

	if (!list || !*list)
		return;

	curr = *list;
	while (curr)
	{
		swapped = 0;
		prev = curr->prev;

		if (prev && curr->n < prev->n)
		{
			if (curr->next)
				curr->next->prev = prev;
			if (prev->prev)
				prev->prev->next = curr;
			prev->next = curr->next;
			curr->prev = prev->prev;
			prev->prev = curr;
			curr->next = prev;
			if (!curr->prev)
				*list = curr;
			swapped = 1;
			print_list(*list);
		}
		if (!swapped)
			curr = curr->next;
	}
}
