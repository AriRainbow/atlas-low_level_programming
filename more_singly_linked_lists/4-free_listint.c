#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to head of list
 */
void free_listint(listint_t *head)
{
	listint_t *temp; /* temp pointer to hold current node */

	while (head != NULL) /* loop until all nodes freed */
	{
		temp = head; /* save current node */
		head = head->next; /* move to next node */
		free(temp); /* free current node */
	}
}
