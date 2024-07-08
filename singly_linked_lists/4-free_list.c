#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a t_list list
 * @head: Pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *temp_node; /* temp pointer to hold node being freed */

	while (head != NULL)
	{
		temp_node = head; /* save current head */
		head = head->next; /* move to next node */
		free(temp_node->str); /* free string of current node */
		free(temp_node); /* free current node */
	}
}
