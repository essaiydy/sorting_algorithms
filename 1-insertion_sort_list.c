#include "sort.h"

/**
 * insertion_sort_list - A function that sort a doubly linked
 * list of integers in ascending order using the Insertion sort algorithm
 * @list: The head of list
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *tmp1 = NULL, *tmp2 = NULL;

	if (!list || !*list || !(*list)->next)
		return;

	tmp = *list;
	tmp1 = tmp->next;

	while (tmp1)
	{
		tmp2 = tmp1;
		while (tmp && tmp1->n < tmp->n)
		{
			tmp->next = tmp1->next;
			tmp1->prev = tmp->prev;
			if (tmp->prev != NULL)
				tmp->prev->next = tmp1;
			tmp->prev = tmp1;
			if (tmp1->next != NULL)
				tmp1->next->prev = tmp;
			tmp1->next = tmp;
			if (tmp1->prev == NULL)
				*list = tmp1;

			print_list(*list);
			tmp = tmp1->prev;
		}
		tmp1 = tmp2->next;
		tmp = tmp2;
	}
}
