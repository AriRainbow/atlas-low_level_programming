#include "lists.h"

/**
 * list_len - Returns number of elements in linked list_t list.
 * @h: Pointer to head of list.
 *
 * Description:
 * Return: Number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0; /* initialize to zero */

	while (h != NULL) /* traverse the list */
	{
		h = h->next; /* move to next node */
		node_count++; /* counter */
	}

	return (node_count); /* total number of nodes */
}
