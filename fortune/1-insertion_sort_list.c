#include "sort.h"


void insertion_sort_list(listint_t **list)
{
	listint_t *prev, *curr = *list;
	int swapped;

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
