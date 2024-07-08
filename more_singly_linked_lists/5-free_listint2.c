#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets head to NULL
 * @head: Double pointer to head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp; /* temp pointer to hold current node */

	if (head == NULL)
		return;

	while (*head != NULL) /* loop until all nodes freed */
	{
		temp = *head; /* save current node */
		*head = (*head)->next; /* move to next node */
		free(temp); /* free current node */
	}

	*head = NULL; /* set head to NULL */
}

/**
 * Description: (*head)->next dereferences pointer to the node 
 * before accessing next member
 * *head->next interpreted as head->next, accesses next member
 * of head pointer itself
 */
