#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes node at a given index
 * @head: Pointer to the pointer to head of list
 * @index: Index of node to be deleted, starting from 0
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head; /* pointer to traverse list */
	unsigned int i = 0; /* counter to track current position */

	if (*head == NULL) /* check if list empty */
		return (-1);

	if (index == 0) /* if index 0, delete head node */
	{
		*head = current_node->next; /* update head to next node */
		if (current_node->next != NULL)
			current_node->next->prev = NULL; /* new head prev ptr */
		free(current_node); /* free old head */
		return (1);
	}

	/* traverse list to find node at given index */
	while (current_node != NULL && i < index)
	{
		current_node = current_node->next; /* next node */
		i++;
	}

	if (current_node == NULL) /* if reach end of list, return -1 */
		return (-1);

	/* update pointers of previous and next nodes */
	if (current_node->prev != NULL)
		current_node->prev->next = current_node->next;
	if (current_node->next != NULL)
		current_node->next->prev = current_node->prev;

	free(current_node); /* free node to be deleted */
	return (1);
}
