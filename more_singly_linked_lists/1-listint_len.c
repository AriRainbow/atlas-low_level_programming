#include "lists.h"

/**
 * listint_len - Returns number of elements in linked listint_t list
 * @h: Pointer to head of list
 *
 * Return: Number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0; /* number of nodes in list */

	while (h != NULL)
	{
		node_count++; /* node count */
		h = h->next; /* move to next node */
	}

	return (node_count); /* total number of nodes */
}
