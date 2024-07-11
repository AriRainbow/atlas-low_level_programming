#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp; /* temp ptr to hold next node */

	while (head != NULL)
	{
		temp = head->next; /* store next node */
		free(head); /* free current node */
		head = temp; /* move to next node */
	}
}
