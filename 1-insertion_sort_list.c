#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: pointer to the linked list that will be sorted
 **/

void insertion_sort_list(listint_t **list)
{
	listint_t *prev;
	listint_t *next;
	listint_t *current;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		next = current->next;

		while (current->prev && (current->n < current->prev->n))
		{
			prev = current->prev;

			current->prev = prev->prev;
			if (current->prev)
				current->prev->next = current;
			else
				*list = current;

			prev->next = current->next;
			if (prev->next)
				prev->next->prev = prev;

			current->next = prev;
			prev->prev = current;

			print_list(*list);
		}
		current = next;
	}
}
