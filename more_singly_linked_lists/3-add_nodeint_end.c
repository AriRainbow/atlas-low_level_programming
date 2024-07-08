#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds new node at end of listint_t list
 * @head: Double pointer to head of list
 * @n: Integer to be added to new node
 *
 * Return: Address of new element, or NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node; /* pointer to new node */
	listint_t *current; /* pointer to traverse list */

	/* allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL); /* return NULL if fails */

	new_node->n = n; /* set value of new node */
	new_node->next = NULL; /* new node will be last, set next to NULL */

	if (*head == NULL) /* if list is empty */
	{
		*head = new_node; /* make new node the head */
	}
	else
	{
		current = *head; /* start from head */
		while (current->next != NULL) /* traverse to last node */
		{
			current = current->next;
		}
		current->next = new_node; /* set last node's next to new node */
	}

	return (new_node); /* address of new node */
}
