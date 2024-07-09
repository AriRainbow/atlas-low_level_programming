#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes node at index of listint_t linked list
 * @head: Double pointer to head of list
 * @index: Index of node that should be deleted, starts at 0
 *
 * Return: 1 if succeed, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *temp_node; /* ptrs for traverse and delete */
	unsigned int count = 0; /* index counter */

	if (*head == NULL) /* if list empty */
		return (-1);

	current_node = *head;

	if (index == 0) /* if deleting head node */
	{
		*head = (*head)->next; /* update head to next node */
		free(current_node); /* free old head node */
		return (1);
	}

	/* traverse to node before index to be deleted */
	while (current_node && count < index - 1)
	{
		current_node = current_node->next;
		count++;
	}

	/* if index out of range */
	if (!current_node || !(current_node->next))
		return (-1);

	/* point temp_node to node to be deleted */
	temp_node = current_node->next;
	current_node->next = temp_node->next; /* update pointers */
	free(temp_node); /* free memory of deleted node */

	return (1);

}
