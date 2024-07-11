#include "lists.h"

/**
 * dlistint_len - Returns number of elements in linked dlistint_t list
 * @h: Pointer to head of list
 *
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0; /* node counter */

	/* traverse list and count nodes */
	while (h != NULL)
	{
		count++;
		h = h->next; /* next node */
	}

	return count; /* total number of nodes */
}
