#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Double pointer to head of list
 * @idx: Index of the list where new node should be added
 * @n: data to insert in new node
 *
 * Return: Address of new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node; /* pointer to new node */
	listint_t *current_node = *head; /* pointer to current node */
	unsigned int count = 0; /* index counter */

	/* allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n; /* set data for new node */

	/* if inserting at beginning (index 0) */
	if (idx == 0)
	{
		new_node->next = *head; /* point new node to current head */
		*head = new_node; /* update head to new node */
		return (new_node);
	}

	/* traverse to node before insertion point */
	while (current_node && count < idx -1)
	{
		current_node = current_node->next;
		count++;
	}

	/* if reach end or index out of range */
	if (!current_node || count != idx -1)
	{
		free(new_node); /* free allocated memory */
		return (NULL);
	}

	/* insert new node at specified index */
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
