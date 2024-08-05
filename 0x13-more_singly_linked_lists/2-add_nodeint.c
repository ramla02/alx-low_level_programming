#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at
 * the beginning of a listint_t list.
 * @head: the head
 * @n: inteher
 * Return:  the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tp;

	tp = malloc(sizeof(listint_t));
	if (tp == NULL)
		return (NULL);

	tp->n = n;
	tp->next = *head;
	*head = tp;
	return (*head);
}
