#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds new node at end of dlistint_t list
 * @head: Double pointer to head of list
 * @n: Integer to be added to new node
 *
 * Return: Address of new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node; /* pointer to new node */
	dlistint_t *temp = *head; /* temp ptr to traverse list */

	/* allocate new node memory */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL) /* check if malloc failed */
	{
		return (NULL);
	}

	new_node->n = n; /* assign integer to new node */
	new_node->next = NULL; /* new node will be last node, next is NULL */

	if (*head == NULL) /* if list empty */
	{
		new_node->prev = NULL; /* New node's prev is NULL */
		*head = new_node; /* head now points to new node */
		return (new_node);
	}

	/* find last node */
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	/* current last node's next points to new node */
	temp->next = new_node;
	new_node->prev = temp; /* new node's prev points to current last node */

	return (new_node); /* address of new element */
}
