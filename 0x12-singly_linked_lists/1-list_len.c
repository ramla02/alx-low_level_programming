#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a
 * linked list_t list.
 * @h: singlylinked list
 * Return:  number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
