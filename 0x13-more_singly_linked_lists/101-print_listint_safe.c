#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * This function can print lists with a loop
 * You should go through the list only once
 * If the function fails, exit the program with status 98
 * @head: the head
 * Return: he number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);
}
