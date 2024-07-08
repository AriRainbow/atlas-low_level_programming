#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a listint_t list
 * @h: Pointer to head of list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0; /* number of nodes in list */

	while (h != NULL)
	{
		printf("%d\n", h->n); /* print integer in current node */
		h = h->next; /* move to next node */
		node_count++;
	}

	return (node_count);
}
