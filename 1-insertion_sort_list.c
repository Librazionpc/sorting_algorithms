#include "sort.h"

/**
 * insertion_sort_list - A doubly linked list that uses
 * insertion sorting for array unsorted integers
 *
 * @list: The doubly linked list
 *
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *temp = NULL;

	if (*list == NULL)
		return;
	current = *list;
	current = current->next;
	while (current)
	{
		while (current->prev && current->n < (current->prev)->n)
		{
			temp = current;
			if (current->next)
				(current->next)->prev = temp->prev;
			(current->prev)->next = temp->next;
			current = current->prev;
			temp->prev = current->prev;
			temp->next = current;
			if (current->prev)
				(current->prev)->next = temp;
			current->prev = temp;
			if (temp->prev == NULL)
				*list = temp;
			print_list(*list);
		}
		current = current->next;
	}
}
