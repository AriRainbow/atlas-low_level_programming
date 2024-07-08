#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds new node at beginning of listint_t list
 * @head: Doube pointer to head of list
 * @n: Integer to be added to the new node
 *
 * Return: Address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /* pointer to new node */

	/* allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL); /* return NULL if fails */

	new_node->n = n; /* set value of new node */
	new_node->next = *head; /* point new node to current head */
	*head = new_node; /* update head to new node */

	return (new_node); /* address of new node */
}
