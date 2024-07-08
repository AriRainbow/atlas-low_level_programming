#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of lintint_t linked list
 * @head: Pointer to head of list
 * @index: Index of node to return, starting at 0
 *
 * Return: Nth node, or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index; /* list counter */

	/* traverse list until desired index */
	for (current_index = 0; current_index < index; current_index++)
	{
		/* if reach end of list before reach index */
		if (head == NULL)
			return (NULL);
		head = head->next; /* move to next node */
	}

	return (head); /* return node at the index */
}
