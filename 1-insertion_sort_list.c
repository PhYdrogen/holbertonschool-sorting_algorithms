#include "sort.h"
#include <stdio.h>

/**
 * swap_node - make it easier
 * @header: the list header
 * @pre: the prev node
 * @act: the actual node
 * Return: none
 */
void swap_node(listint_t **header, listint_t *pre, listint_t *act)
{
	listint_t *prevprev = pre->prev;
	listint_t *nextnext = act->next;

	if (prevprev != NULL && prevprev->next != NULL)
		prevprev->next = act;

	act->prev = prevprev;

	act->next = pre;
	pre->prev = act;

	pre->next = nextnext;
	nextnext->prev = pre;
	if (prevprev == NULL)
		*header = pre;
}
/**
 * insertion_sort_list - use the insertion algo
 * @list: the header of the linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *precedent = NULL, *actuel = NULL, *header = NULL;
	int j = 0;

	if (*list == NULL)
		return;

	header = *list;
	while (header->next)
	{
		if (header->prev == NULL) /* Je suis au premier numero */
		{
			j++;
			header = header->next;
			continue;
		}
		precedent = header->prev;
		actuel = header;
		if (precedent->n > actuel->n)
		{
			swap_node(list, precedent, actuel);
			print_list(*list);
		}
	j++;
	header = header->next;
	}

}
