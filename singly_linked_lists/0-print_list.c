#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Description:
 * Return: Number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0; /* Initialize node count to zero */

	/* traverse the list */
	while (h != NULL)
	{
		if (h->str == NULL) /* print nil if NULL */
			printf("[0] (nil)\n");
		else /* current node string if not NULL */
			printf("[%u] %s\n", h->len, h->str);

		h = h->next; /* move to next node */
		node_count++; /* counter */
	}

	return (node_count);
}
