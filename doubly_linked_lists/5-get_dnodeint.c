#include "lists.h"
#include <stddef.h>

/**
 * get_dnodeint_at_index - Returns nth node of dlistint_t linked list
 * @head: Pointer to head of list
 * @index: Index of node to return, starting from 0
 *
 * Return: Pointer to nth node, or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0; /* counter */

	while (head != NULL)
	{
		if (count == index) /* if current node is nth node */
			return (head); /* return current node */
		head = head->next; /* next node */
		count++;
	}

	return (NULL); /* if node does not exist */
}
