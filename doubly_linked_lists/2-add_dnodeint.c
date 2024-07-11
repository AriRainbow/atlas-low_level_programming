#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeintn - Adds new node at beginning of dlistint_t list
 * @head: Double pointer to head of the list
 * @n: Integer to be added to new node
 *
 * Return: Address of new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node; /* pointer to new node */

	/* allocate new node memory */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL) /* check if malloc failed */
	{
		return (NULL);
	}

	new_node->n = n; /* assign integer to new node */
	new_node->prev = NULL; /* new node is new head, prev is NULL */
	new_node->next = *head; /* new node's next points to current head */

	/* if list not empty, set current head's prev to new node */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node; /* update head to new node */
	return (new_node); /* address of new element */
}
