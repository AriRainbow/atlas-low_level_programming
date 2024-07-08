#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes head node of a linked list and return its data
 * @head: Double pointer to head of list
 *
 * Return: Data inside head node, or 0 if list empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp; /* temp pointer to hold node being deleted */
	int n; /* store data from node being deleted */

	/* is list empty or head pointer NULL */
	if (head == NULL || *head == NULL)
		return (0);

	temp = *head; /* store current head node in temp */
	n = temp->n; /* store data from head node */
	*head = (*head)->next; /* move head pointer to next node */
	free(temp); /* free old head node */

	return (n); /* data from old head node */
}
